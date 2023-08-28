#include<iostream>
#include<string>

using namespace std;

int main() {
    string name,lang;
    cout << "What is your name?: "; cin >> name;
    cout << "Are you Japanese?: "; cin >> lang;
    if (lang == "Yes") {
        cout << "Konnichiwa, " << name << "-san.";
    }
    if (lang == "No") {
        cout << "Hi, " << name << ".";
    }
    if (lang != "No" && lang != "Yes") {
        cout << "Error!!!";
    }
}