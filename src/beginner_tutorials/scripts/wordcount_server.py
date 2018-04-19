#!/usr/bin/env python
import rospy
from beginner_tutorials.srv import WordCount, WordCountResponse

def count_words(request):
	return WordCountResponse(len(request.words.split()))

rospy.init_node('wordcount_server',anonymous=True)
service=rospy.Service('word_count', WordCount, count_words)
print "ready to count words"
rospy.spin()
