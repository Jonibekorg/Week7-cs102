#include <iostream>
using namespace std;

int toMinutes(int h, int m);
int convertTime(int current, int correct);

int main() {
    int h1, h2, m1, m2;
    char c1, c2;
    cin >> h1 >> c1 >> m1 >> h2>>c2>>m2;
    int current = toMinutes(h1, m1);
    int correct = toMinutes(h2, m2);
    cout<< convertTime(current, correct)<<endl;
}

int toMinutes(int h, int m) {
    return h * 60 + m;
}

int convertTime(int current, int correct) {
    int dif = correct - current;
    int c = 0;
    while (dif >= 60) {
        dif -= 60;
        c++;
    }
    while (dif >= 15) {
        dif -= 15;
        c++;
    }
    while (dif >= 5) {
        dif -= 5;
        c++;
    }
    while (dif >= 1) {
        dif -= 1;
        c++;
    }
    return c;
}