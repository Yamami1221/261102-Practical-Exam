#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>

using namespace std;

int findMinLoc(double a, double b, double c, double d) {
    int x[201];
    int i = 0,ans = 0;
    double y = 0,z = 200;
    for (i = 0; i <= 200; i++) {
        x[i] = i;
    }
    for (i = 0; i <= 200; i++) {
        y = ((a * sin((M_PI * x[i])/(pow(b,2)+1))) + (c * cos((M_PI*x[i])/(pow(d,2)+1))));
        if (y <= z) {
            z = y;
        }
    }
    for (i = 0; i <= 200; i++) {
        y = ((a * sin((M_PI * x[i])/(pow(b,2)+1))) + (c * cos((M_PI*x[i])/(pow(d,2)+1))));
        if (y == z) {
            ans = x[i];
            break;
        }
    }
    return ans;
}

int main() {
    cout << findMinLoc(5,3,9,10);
    cout << findMinLoc(0,0,0,0);
    cout << findMinLoc(1,1,1,1);
    cout << findMinLoc(-2.5,7.8,4,-10.3);
    cout << findMinLoc(-5,50,0.5,100);
    return 0;
}