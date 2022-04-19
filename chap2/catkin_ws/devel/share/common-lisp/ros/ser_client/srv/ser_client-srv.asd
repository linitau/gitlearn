
(cl:in-package :asdf)

(defsystem "ser_client-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "AddInt" :depends-on ("_package_AddInt"))
    (:file "_package_AddInt" :depends-on ("_package"))
  ))