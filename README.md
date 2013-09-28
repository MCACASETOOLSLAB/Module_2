This software is intended to provide small working example of PROCESS SYNCRONIZATION.This module for critical section problem where only one process will be execute at a time.Each process(CAR)must request permission to enter its critical dection . The section of code implementing this request is the entry section and critical section followed by an exit section.But in critical section occur Busy Waiting.While a process is in its critical section,any other process that tries to enter its critical section must loop continuously in the entry code. 
          Semaphore : mutex,provides mutual exclusion where if process p1(CAR_1) is executing in its critical section,then other processes can not be executing in their critical section.when process use a resource, its performs  wait operation and when a process releases a resource,it performs a signal operaton
One thing we add in this module spinlock which are semaphore with busy waiting where Busy Waiting wastes CPU cycles That other process(Other CAR) able to use productively.
This software had been developed in DOS BOX TurboC++.
Now you can read the code and its comments and see the result, experiment with it, and hopefully quickly grasp how things work.

If you find a problem, incorrect comment, obsolete or improper code or such, please let me know



Birenda Kumar(70) +91-9543683318
