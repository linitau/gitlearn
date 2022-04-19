;; Auto-generated. Do not edit!


(when (boundp 'ser_client::AddInt)
  (if (not (find-package "SER_CLIENT"))
    (make-package "SER_CLIENT"))
  (shadow 'AddInt (find-package "SER_CLIENT")))
(unless (find-package "SER_CLIENT::ADDINT")
  (make-package "SER_CLIENT::ADDINT"))
(unless (find-package "SER_CLIENT::ADDINTREQUEST")
  (make-package "SER_CLIENT::ADDINTREQUEST"))
(unless (find-package "SER_CLIENT::ADDINTRESPONSE")
  (make-package "SER_CLIENT::ADDINTRESPONSE"))

(in-package "ROS")





(defclass ser_client::AddIntRequest
  :super ros::object
  :slots (_num1 _num2 ))

(defmethod ser_client::AddIntRequest
  (:init
   (&key
    ((:num1 __num1) 0)
    ((:num2 __num2) 0)
    )
   (send-super :init)
   (setq _num1 (round __num1))
   (setq _num2 (round __num2))
   self)
  (:num1
   (&optional __num1)
   (if __num1 (setq _num1 __num1)) _num1)
  (:num2
   (&optional __num2)
   (if __num2 (setq _num2 __num2)) _num2)
  (:serialization-length
   ()
   (+
    ;; int32 _num1
    4
    ;; int32 _num2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _num1
       (write-long _num1 s)
     ;; int32 _num2
       (write-long _num2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _num1
     (setq _num1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _num2
     (setq _num2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ser_client::AddIntResponse
  :super ros::object
  :slots (_sum ))

(defmethod ser_client::AddIntResponse
  (:init
   (&key
    ((:sum __sum) 0)
    )
   (send-super :init)
   (setq _sum (round __sum))
   self)
  (:sum
   (&optional __sum)
   (if __sum (setq _sum __sum)) _sum)
  (:serialization-length
   ()
   (+
    ;; int32 _sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sum
       (write-long _sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sum
     (setq _sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ser_client::AddInt
  :super ros::object
  :slots ())

(setf (get ser_client::AddInt :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get ser_client::AddInt :datatype-) "ser_client/AddInt")
(setf (get ser_client::AddInt :request) ser_client::AddIntRequest)
(setf (get ser_client::AddInt :response) ser_client::AddIntResponse)

(defmethod ser_client::AddIntRequest
  (:response () (instance ser_client::AddIntResponse :init)))

(setf (get ser_client::AddIntRequest :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get ser_client::AddIntRequest :datatype-) "ser_client/AddIntRequest")
(setf (get ser_client::AddIntRequest :definition-)
      "int32 num1
int32 num2
---
int32 sum

")

(setf (get ser_client::AddIntResponse :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get ser_client::AddIntResponse :datatype-) "ser_client/AddIntResponse")
(setf (get ser_client::AddIntResponse :definition-)
      "int32 num1
int32 num2
---
int32 sum

")



(provide :ser_client/AddInt "4781436a0c2affec8025955a6041e481")


