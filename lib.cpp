#include "lib.h"

bool funzione(char Array[10][20], char Array2[20], int &pos) {

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (Array2[j] != Array[i][j]) {
                j = 20;
            } else {
                pos = i + 1;
                return true;
            }
        }
    }
    return false;
}
