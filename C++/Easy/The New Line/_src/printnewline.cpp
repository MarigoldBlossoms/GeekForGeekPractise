#include "printnewline.h"

void printNewLine() {
    int size = 3;
    string outputS[3] = {"Geeks", "for", "Geeks"};

    for (int i = 0; i < size; i++)
    {
        cout << outputS[i] << endl;
    }
}