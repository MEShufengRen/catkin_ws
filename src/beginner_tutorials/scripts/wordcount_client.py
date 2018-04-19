#!/usr/bin/env python

import rospy
from beginner_tutorials.srv import WordCount
import sys

rospy.init_node('wordcount_client', anonymous=True)

def wordcount_client(words):
    rospy.wait_for_service('word_count')
    try:
        word_counter= rospy.ServiceProxy('word_count', WordCount)
        word_count = word_counter(words)
        return word_count.count
    except rospy.ServiceException, e:
        print "Service call failed: %s"%e

def usage():
    return "%s 'enter the words'"%sys.argv[0]

if __name__ == "__main__":
    if len(sys.argv) >1:
	words=''.join(sys.argv[1:])
    else:
        print usage()
        sys.exit(1)
    print "Requesting count '%s'"%words
    print "number of words= %s"%(wordcount_client(words))

