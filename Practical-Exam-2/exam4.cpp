#include<iostream>

using namespace std;

int main(){
    int L;
    cin >> L;
    int num = 0;
    
    for (int i = 0; i < L; i++) {
        cout << "A";
        for (int j = 0; j < L - 2; j++) {
            cout << num;
        }
        cout << "A" << endl;
        if (num >= 3) {
            num = 0;
        } else {
            num++;
        }
    }
    
    return 0;
}