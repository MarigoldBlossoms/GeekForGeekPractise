#include <iostream>

using namespace std;

template <class T>
void sortArray(T arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            //Sweep through array
            //If current value more than prev Value, swap
            if (arr[n - j - 1] < arr[n - j - 2])
            {
                swap(arr[n - j - 1], arr[n - j - 2]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

template <class T>
void printArray(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}