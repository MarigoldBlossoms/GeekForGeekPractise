#include <iostream>
using namespace std;

int main() {
    int dim;
    cin >> dim;
    
    for (int y = 0; y < dim; y++)
    {
        for (int x = 0; x < dim; x++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}