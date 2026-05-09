#include <vector>

using namespace std;

bool validValue(int n, int m, int yCoord, int xCoord);

int getValue(vector<vector<int>> arr, int n, int m, int yCoord, int xCoord);

vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[]);