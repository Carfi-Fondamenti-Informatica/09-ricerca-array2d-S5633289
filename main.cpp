#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char Array[10][20];
    char Array2[20];

    for (int i = 0; i < 10; i++) {
        cin >> Array[i];
    }

    cin >> Array2;

    funzione(Array, Array2);

    return 0;
}
