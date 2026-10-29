#include <iostream>
using namespace std;

bool hasAlternatingBits(int n);

int main() {
    int n;
    cin>> n;
    if (hasAlternatingBits(n)) {
        cout << "true"<<endl;;
    }
    else {
        cout << "false"<<endl;
    }
    return 0;
}

bool hasAlternatingBits(int n) {
    int prev = n & 1;
    n >>= 1;
    while (n > 0) {
        int current = n & 1;
        if (current == prev) return false;
        prev = current;
        n >>= 1;
    }
    return true;
}