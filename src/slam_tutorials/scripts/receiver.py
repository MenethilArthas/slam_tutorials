#!/usr/bin/env python

import struct
import threading
import serial
import rospy
from std_msgs.msg import Int16,Int32,Int64,Float32,Float64,String,UInt64
from slam_tutorials.msg import recdata

updateflag=False
coord_x=0
coord_y=0
coord_angle=0
vel_x=0
vel_w=0
def Reciver():
	#print('rec thread start')
	global updateflag
	global coord_x
	global coord_y
	global coord_angle
	global vel_x
	global vel_w
	ser=serial.Serial('/dev/serial0',115200,timeout=1)
	
	while not rospy.is_shutdown():

		data=ser.read(22)
		if(len(data)==22):
			if(data[0]=='A'and data[1]=='C'):
				coord_x,=struct.unpack('f',data[2]+data[3]+data[4]+data[5])
				coord_y,=struct.unpack('f',data[6]+data[7]+data[8]+data[9])
				coord_angle,=struct.unpack('f',data[10]+data[11]+data[12]+data[13])
				vel_x,=struct.unpack('f',data[14]+data[15]+data[16]+data[17])
				vel_w,=struct.unpack('f',data[18]+data[19]+data[20]+data[21])
				updateflag=True
			else:
				while data[0]!='A':
					data=ser.read(1)
				data=ser.read(21)
				
		else:
			pass
		

if __name__ =='__main__':
	
	#print("main thread start")
	
	rospy.init_node("test",log_level=rospy.INFO)
	pub=rospy.Publisher('rec_data',recdata,queue_size=1000)
	rec=threading.Thread(target=Reciver)
	rec.setDaemon(True)
	rec.start()
	rate=rospy.Rate(10)
	
	while not rospy.is_shutdown():
		
		if(updateflag):
			
			rec_data=recdata()
			rec_data.x=coord_x
			rec_data.y=coord_y
			rec_data.angle=coord_angle
			rec_data.x_vel=vel_x
			rec_data.w_vel=vel_w
			rospy.loginfo("x=%f y=%f angle=%f" %(rec_data.x,rec_data.y,rec_data.angle))
			#print(rec_data.angle)
			#print(coord_angle)
			pub.publish(rec_data)
			updateflag=False
			
			rate.sleep()
				
