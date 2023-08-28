#include<iostream>

using namespace std;

int ids[] = {99,12,48,105,10,15,25,46,499,128,87,52,221,300,714,188,189,910,412,555};
char genders[] = {'m','f','m','m','f','f','f','m','m','f','m','f','f','m','f','f','f','m','m','f'};
string faculty[] = {"eng","med","econ","med","eng","law","law","dent","med","camt","med","dent","econ","eng","med","eng","eng","econ","econ","agri"};
int N = sizeof(ids)/sizeof(ids[0]);


int main(){
    int j = 0;
    char genderToFind;
    string facultyToFind;
    bool found = 0;
    cout << "Input gender and faculty to search:\n"; cin >> genderToFind >> facultyToFind;
    
    for (int i = 0; i < N; i++) {
        if ( genders[i] == genderToFind && faculty[i] == facultyToFind) {
            cout << "Student " << ++j << ": " << ids[i] << endl;
            found = 1;
        }
    }
    if (!found) {
        cout << "not found";
    }

    
    return 0;
}