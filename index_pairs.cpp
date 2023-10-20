//Suppose, we have given an integer array. The problem “Count of index pairs with equal elements in an array” asks to find out the no of pair of indices (i,j) in such a way that arr[i]=arr[j] and i is not equal to j.

#include<iostream>
#include<unordered_map>
using namespace std;
int getNoOfPairs(int arr[], int n)
{
    unordered_map<int, int> MAP;
    for (int i = 0; i < n; i++)
        MAP[arr[i]]++;
    int output = 0;
    for (auto it=MAP.begin(); it!=MAP.end(); it++)
    {
        int VAL = it->second;
        output += (VAL * (VAL - 1))/2;
    }
    return output;
}
int main()
{
    int arr[] = {2,3,1,2,3,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << getNoOfPairs(arr, n) << endl;
    return 0;
}
