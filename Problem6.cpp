#include <iostream>
using namespace std;

int minOperations(int n);

int main() {
    int n;
    cin>>n;
    cout<<minOperations(n)<<endl;
    return 0;
}

int minOperations(int n) {
    int c = 0;
    while (n > 0) {
        if (n % 4 == 3)
            n++;
        if (n % 2 == 1)
            n--;
        c++;
        n /= 2;
        return c;
    }
}




#include <iostream>
using namespace std;

int tribonacci(int n);

int main() {
int n;
cin>>n;
cout<<tribonacci(n)<<endl;
return 0;
}

int tribonacci(int n) {
if (n == 0)
return 0;
if (n == 1 || n == 2)
return 1;
int t0 = 0, t1 = 1, t2 = 1, tn = 0;
for (int i = 3; i <= n; i++) {
tn = t0 + t1 + t2;
t0 = t1;
t1 = t2;
t2 = tn;
}
return tn;
}



