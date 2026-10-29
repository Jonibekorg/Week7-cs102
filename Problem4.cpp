#include <iostream>
using namespace std;

void printRepeat(char c, int times);
void smallestString(int n, int k);

int main() {
    int n, k;
    if (cin >> n >> k) {
        smallestString(n, k);
        cout << endl;
    }
    return 0;
}

void printRepeat(char c, int times) {
    for (int i = 0; i < times; i++) {
        cout << c;
    }
}

void smallestString(int n, int k) {
    int extra = k - n;
    int z_count = extra / 25;
    int remainder = extra % 25;
    int a_count = n - z_count - (remainder > 0 ? 1 : 0);

    printRepeat('a', a_count);
    if (remainder > 0) {
        cout << (char)('a' + remainder);
    }
    printRepeat('z', z_count);
}
