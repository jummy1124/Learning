#include <cstdio>
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int count;
    long long int n, M;
    while ((cin >> n) && n) {
        count = 0;
        for (int a = 9; a >= 0; --a) {
            if (((n - a) % 9) == 0) {
                M = (n - a) / 9;
                if (count++) putchar(' ');
                cout << n+M;
            }
        }
        putchar('\n');
    }
    return 0;
}
