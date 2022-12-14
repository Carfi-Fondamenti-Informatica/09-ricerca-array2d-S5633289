#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char Array[10][20];
    char Array2[20];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            Array[i][j] = ' ';
            Array2[j] = ' ';
        }
    }

    for (int i = 0; i < 10; i++) {
        cin >> Array[i];
        for (int j = 0; j < 20; j++) {
            if (Array[i][j] == 0) {
                for (int z = j; z < 20; z++) {
                    Array[i][z] = '\0';

                }
            }
        }
    }

    cin >> Array2;
    for (int j = 0; j < 20; j++) {
        if (Array2[j] == 0) {
            for (int z = j; z < 20; z++) {
                Array2[z] = '\0';
            }
        }
    }
    funzione(Array, Array2);

    return 0;
}
