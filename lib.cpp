#include <iostream>
#include "lib.h"
#include "cstring"

using namespace std;

void funzione(char Array[10][20], char Array2[20]) {
    int a = 0;
    for (int i = 0; i <= 10; i++) {
        if (Array[i] == Array2) {
            a = i;
        }
    }
    if (a != 0) {
        cout << a;
    } else { cout << 'non presente'; }

}
