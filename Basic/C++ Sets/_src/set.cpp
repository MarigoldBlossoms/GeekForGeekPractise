#include "set.h"

set<int> SetUnion(set<int> A, set<int> B)
{
    vector<int> tempV;
    set_union(A.begin(), A.end(), B.begin(), B.end(), back_inserter(tempV));

    set<int> outputS;
    for(int i = 0; i < tempV.size(); i++)
    {
        outputS.insert(tempV[i]);
    }

    if (outputS.empty())
    {
        outputS.insert(0);
    }

    return outputS;
}

set<int> SetDifference(set<int> A, set<int> B)
{
    vector<int> tempV;
    set_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(tempV));

    set<int> outputS;
    for(int i = 0; i < tempV.size(); i++)
    {
        outputS.insert(tempV[i]);
    }

    if (outputS.empty())
    {
        outputS.insert(0);
    }

    return outputS;
}

set<int> SetIntersection(set<int> A, set<int> B)
{
    vector<int> tempV;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(tempV));

    set<int> outputS;
    for(int i = 0; i < tempV.size(); i++)
    {
        outputS.insert(tempV[i]);
    }

    if (outputS.empty())
    {
        outputS.insert(0);
    }

    return outputS;
}

vector<set<int>> setOperations(set<int> A, set<int> B)
{
    vector<set<int>> outputSet;

    //Set union
    outputSet.push_back(SetUnion(A, B));

    //Set difference
    outputSet.push_back(SetDifference(A, B));

    //Set intersection
    outputSet.push_back(SetIntersection(A, B));
    
    return outputSet;
}

