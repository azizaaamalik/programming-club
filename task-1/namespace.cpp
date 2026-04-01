#include <iostream>

namespace intSum{
    int sum(int a, int b){
        return a + b;
    }
}

namespace longSum {
    long sum(long a, long b){
        return a + b;
    }
}

int main() {
    using std::cout;

    cout << intSum::sum(6, 8);
    cout << longSum::sum(5, 6);

    return 0;
}
