#include <iostream>
#include "lib.h"
#include "cstring"

using namespace std;

void funzione(char Array[10][20], char Array2[20]) {
    int a = -1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (Array2[j] != Array[i][j]) {
                j=20;
            } else {
                a = i + 1;

            }
        }
    }
    if (a != -1) {
        cout << a;
    } else { cout << "non presente"; }

}
