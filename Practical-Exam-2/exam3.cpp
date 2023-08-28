#include <iostream>

using namespace std;

void updateScore(int [], int [], int);

int main () {
    int a[] = {1,20,40,0};
    int b[] = {0,0,0,0};
    updateScore(a,b,4);
    for(int i = 0; i < 4; i++){
        cout << b[i] << " ";
    }
}

void updateScore(const int a[], int b[], int n) {
    double diff[n];
    double ans, sum = 0, min;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    ans = (sum / n) * 0.8;
    for (int i = 0; i < n; i++) {
        if (ans < a[i]) {
            diff[i] = a[i] - ans;
        } else {
            diff[i] = ans - a[i];
        }
    }
    min = diff[0];
    for (int i = 0; i < n; i++) {
        if (diff[i] < min) {
            min = diff[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (diff[i] == min) {
            b[i]++;
        }
    }
}