#include <iostream>
#include <iomanip>

using namespace std;

double sg(double, double, double);

int main () {
    cout << fixed << setprecision(3);
    cout << sg(18.5,2.4,2);
    cout << sg(-5.4,205.4,4.5);
    cout << sg(5.4,205.4,4.5);
    cout << sg(1000,1,25);
    cout << sg(0.5,0.15,0.08);
}

double sg(double x, double y, double k) {
    double max, min;
    if (x > y) {
        max = x;
        min = y;
    } else {
        max = y;
        min = x;
    }
    if (x <= 0 || y <= 0) {
        return 0;
    } else if (max - min <= k) {
        return (x + y) / k;
    } else {
        return sg(x, ((x + y) / 2), k) + sg(y, ((x + y) / 2), k);
    }
}