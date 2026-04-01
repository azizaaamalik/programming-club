### Solution to task-1 given

##1 The mega data type contains 16 bits. Since the CPU has a maximum addressable width of 2 bytes, and the mega data type is defined as the largest data type supported by the CPU, it means that the mega data type contains 16 bits (2 byes).

#include <iostream>

namespace intSum {
    int sum(int a, int b) {
        return a + b;
    }
}

namespace longSum {
    long sum(long a, long b) {
        return a + b;
    }
}

int main() {
    using std::cout;
    
    cout << intSum::sum(6, 8);
    cout << longSum::sum(5, 6);
    
    return 0;
}

##3 The output is 4294967295.
An unsigned int cannot store negative numbers. It ranges from 2^n - 1. Since the "output" is -1 and the number cannot be negative, it wraps around to the very end of its possible range. It is called Unsigned Integer Underflow. 
