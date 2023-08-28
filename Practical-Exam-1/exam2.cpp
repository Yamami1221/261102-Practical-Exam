#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int a,b,c;
    cout << "Please enter A: "; cin >> a;
    cout << "Please enter B: "; cin >> b;
    c = (a + b) % 6;
    while (c < 11) {
        cout << c;
        if (c == 0) {
            cout << a+b;
        } else {
            cout << (a +b) % c;
        }
        if (a > b) {
            cout << 6;
        }
        c = c + 2;
    }
    cout << pow(a,2) + pow(b,2);
}