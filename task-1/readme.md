### Solution to task-1 given

##1 The mega data type contains 16 bits. Since the CPU has a maximum addressable width of 2 bytes, and the mega data type is defined as the largest data type supported by the CPU, it means that the mega data type contains 16 bits (2 byes).


##3 The output is 4294967295.
An unsigned int cannot store negative numbers. It ranges from 2^n - 1. Since the "output" is -1 and the number cannot be negative, it wraps around to the very end of its possible range. It is called Unsigned Integer Underflow. 
