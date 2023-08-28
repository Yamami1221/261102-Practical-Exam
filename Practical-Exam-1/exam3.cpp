#include<iostream>

using namespace std;

int main(){
    int X[] = {-1,2,100,12,0,-4,-2,3,1000,-100,3,-1,50,8,9,0};  
    int Y[] = {-1,7,55,25,8,2,-5,12,2,1,2,-1,27,-7,19,0};
    int s = 0,i = 0,result = 0;
    double a = 0,b = 0,c = 0;
    
    cout << "Enter s: "; cin >> s;
    for (i = 0; i < 16; i++) {
        a = (X[i]+Y[i]);
        b = (X[i]*Y[i]);
        c = b / s;

        if (a >= c) {
            //cout << i+1 << " " << X[i]+Y[i] << ">=" <<(X[i]*Y[i])/s << endl;
            result++;
        }
    }
    cout << "Result is " << result;
    return 0;
}