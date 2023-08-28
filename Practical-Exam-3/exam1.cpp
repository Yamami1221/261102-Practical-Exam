#include <iostream>

void sort3ints(int *a, int *b, int *c) {
    for (int i = 0; i < 3; i++) {
        if (*a > *b && *b > *c) return;
        if (*a < *b) {
            int temp = *a;
            *a = *b;
            *b = temp;
        } else if (b < c) {
            int temp = *b;
            *b = *c;
            *c = temp;
        }
    }
}

int main() {
    int a = 5, b = 2, c = 3;
    sort3ints(&a,&b,&c);
    printf("%d %d %d",a,b,c);
}