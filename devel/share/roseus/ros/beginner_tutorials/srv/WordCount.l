;; Auto-generated. Do not edit!


(when (boundp 'beginner_tutorials::WordCount)
  (if (not (find-package "BEGINNER_TUTORIALS"))
    (make-package "BEGINNER_TUTORIALS"))
  (shadow 'WordCount (find-package "BEGINNER_TUTORIALS")))
(unless (find-package "BEGINNER_TUTORIALS::WORDCOUNT")
  (make-package "BEGINNER_TUTORIALS::WORDCOUNT"))
(unless (find-package "BEGINNER_TUTORIALS::WORDCOUNTREQUEST")
  (make-package "BEGINNER_TUTORIALS::WORDCOUNTREQUEST"))
(unless (find-package "BEGINNER_TUTORIALS::WORDCOUNTRESPONSE")
  (make-package "BEGINNER_TUTORIALS::WORDCOUNTRESPONSE"))

(in-package "ROS")





(defclass beginner_tutorials::WordCountRequest
  :super ros::object
  :slots (_words ))

(defmethod beginner_tutorials::WordCountRequest
  (:init
   (&key
    ((:words __words) "")
    )
   (send-super :init)
   (setq _words (string __words))
   self)
  (:words
   (&optional __words)
   (if __words (setq _words __words)) _words)
  (:serialization-length
   ()
   (+
    ;; string _words
    4 (length _words)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _words
       (write-long (length _words) s) (princ _words s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _words
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _words (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass beginner_tutorials::WordCountResponse
  :super ros::object
  :slots (_count ))

(defmethod beginner_tutorials::WordCountResponse
  (:init
   (&key
    ((:count __count) 0)
    )
   (send-super :init)
   (setq _count (round __count))
   self)
  (:count
   (&optional __count)
   (if __count (setq _count __count)) _count)
  (:serialization-length
   ()
   (+
    ;; uint32 _count
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _count
       (write-long _count s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _count
     (setq _count (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass beginner_tutorials::WordCount
  :super ros::object
  :slots ())

(setf (get beginner_tutorials::WordCount :md5sum-) "58903d21a3264f3408d79ba79e9f7c7e")
(setf (get beginner_tutorials::WordCount :datatype-) "beginner_tutorials/WordCount")
(setf (get beginner_tutorials::WordCount :request) beginner_tutorials::WordCountRequest)
(setf (get beginner_tutorials::WordCount :response) beginner_tutorials::WordCountResponse)

(defmethod beginner_tutorials::WordCountRequest
  (:response () (instance beginner_tutorials::WordCountResponse :init)))

(setf (get beginner_tutorials::WordCountRequest :md5sum-) "58903d21a3264f3408d79ba79e9f7c7e")
(setf (get beginner_tutorials::WordCountRequest :datatype-) "beginner_tutorials/WordCountRequest")
(setf (get beginner_tutorials::WordCountRequest :definition-)
      "string words
---
uint32 count

")

(setf (get beginner_tutorials::WordCountResponse :md5sum-) "58903d21a3264f3408d79ba79e9f7c7e")
(setf (get beginner_tutorials::WordCountResponse :datatype-) "beginner_tutorials/WordCountResponse")
(setf (get beginner_tutorials::WordCountResponse :definition-)
      "string words
---
uint32 count

")



(provide :beginner_tutorials/WordCount "58903d21a3264f3408d79ba79e9f7c7e")


