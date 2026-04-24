#include "stl.h"

/*inserts an element x at
the back of the vector A */
void add_to_vector(vector<int> &A, int x) {
    A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A) {
    int trackI = 0;
    int sortI;

    while (trackI < A.size())
    {
        sortI = 0;
        while (sortI < A.size() - (1 + trackI))
        {
            if (A[sortI] > A[sortI + 1])
            {
                int temp = A[sortI];
                A[sortI] = A[sortI + 1];
                A[sortI + 1] = temp;
            }
            sortI++;
        }
        trackI++;
    }
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A) {
    int trackI = 0;
    
    while ((trackI * 2) < A.size() - 1)
    {
        int temp = A[trackI];
        A[trackI] = A[A.size() - 1 - trackI];
        A[A.size() - 1 - trackI] = temp;

        trackI++;
    }
}

    
/*returns the size of the vector  A */
int size_of_vector(vector<int> &A) {
    return A.size();
}
    

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A) {
    int trackI = 0;
    int sortI;

    while (trackI < A.size())
    {
        sortI = 0;
        while (sortI < A.size() - (1 + trackI))
        {
            if (A[sortI] < A[sortI + 1])
            {
                int temp = A[sortI];
                A[sortI] = A[sortI + 1];
                A[sortI + 1] = temp;
            }
            sortI++;
        }
        trackI++;
    }
}
    
/*prints space separated
elements of vector A*/
void print_vector(vector<int> &A) {
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
}