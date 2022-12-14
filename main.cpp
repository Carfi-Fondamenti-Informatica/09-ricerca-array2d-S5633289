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
    }

    cin >> Array2;
    int a = funzione(Array, Array2);
    if (a != -1) {
        cout << a;
    } else { cout << "non presente"; }

    return 0;
}
