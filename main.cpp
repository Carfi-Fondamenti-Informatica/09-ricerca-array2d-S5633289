#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char Array[10][20];
    char Array2[20];
    int pos = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            Array[i][j] = ' ';
            Array2[j] = ' ';
        }
    }

    for (int i = 0; i < 10; i++) {
        cin >> Array[i];
    }
    cin >> Array2;


    if (funzione(Array, Array2, pos)) {
        cout << pos;
    } else { cout << "non presente"; }

    return 0;
}

