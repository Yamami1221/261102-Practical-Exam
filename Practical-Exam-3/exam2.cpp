#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Card {
    private: string face_f[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    private: int face_v[13] = { 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    private: string suit_f[4] = { "SPADE", "HEART", "DIAMOND", "CLUB" };
    private: int suit_v[4] = { 4, 3, 2, 1 };
    private: string toUpperStr(string x){
        string y = x;
        for(unsigned i = 0; i < x.size();i++) y[i] = toupper(x[i]);
        return y;
    }
    public: string face;
    public: string suit;
    public: Card(string);
    public: bool operator>(Card);
};

Card::Card(string input) {
    int start = 0;
    int end = input.find_first_of(" ");
    this->suit = toUpperStr(input.substr(start,end));
    start = end + 1;
    this->face = toUpperStr(input.substr(start));
}

bool Card::operator>(Card a) {
    int myface_pos;
    int face_pos;
    for (int i = 0; i < 13; i++) {
        if (face_f[i] == this->face) myface_pos = i;
        if (face_f[i] == a.face) face_pos = i;
    }
    if (face_v[myface_pos] > face_v[face_pos]) return true;
    else if (face_v[myface_pos] == face_v[face_pos]) {
        int mysuit_pos;
        int suit_pos;
        for (int i = 0; i < 4; i++) {
            if (suit_f[i] == this->suit) mysuit_pos = i;
            if (suit_f[i] == a.suit) suit_pos = i;
        }
        if (suit_v[mysuit_pos] > suit_v[suit_pos]) return true;
        else return false;
    } else {
        return false;
    }
}

int main() {
    Card x = Card("CLUB A");
    cout << x.suit;
    x = Card("SPADE 2");
    cout << x.face;
    x = Card("DiamonD k");
    cout << x.face << "\n" << x.suit;
    x = Card("Heart 10");
    cout << x.face << "\n" << x.suit;
    cout << (Card("Spade 10") > Card("Spade 2"));
    cout << (Card("CLUB 2") > Card("Spade 2"));
    cout << (Card("Diamond A") > Card("Heart 4"));
    cout << (Card("SPADE A") > Card("SPADE 4"));
    cout << (Card("Heart K") > Card("heart Q"));
}