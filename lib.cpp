#include "lib.h"
#include "cstring"

using namespace std;

void funzione(char Array[10][20], char Array2[20]) {
    char a = ' ';
    for (int i = 0; i <= 10; i++) {
        if (Array[i] == Array2) {
            a = i;
        }
    }
    if (a != ' ') {
        cout << a;
    } else { cout << 'non presente'; }

}
