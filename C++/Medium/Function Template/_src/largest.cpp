using namespace std;

template <class T>
T largest(T arr[], int n) 
{
    T max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) max = arr[i];
    }

    return max;
}