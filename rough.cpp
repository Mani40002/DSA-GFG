// rough.cpp
#include "iostream"
#include "vector"
using namespace std;

void print(vector<int> arr, int size)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int rough(int arr[], int n)
{
    long long int num = 0, t = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        num = num + t * arr[i];
        t = t * 10;
    }
    int newnum = num + 1;
    cout << "naya: " << newnum << endl;
    int count = 0;
    vector<int> newarr;
    while (newnum != 0)
    {
        int rem = newnum % 10;
        newarr.push_back(rem);
        newnum = newnum / 10;
    }
    int x = newarr.size();
    cout<<x<<endl;
    int farray[x];
    for (int i = 0; i < x; i++)
    {
        farray[x - (i+1)] = newarr[i];
    }
    // return {farray};
    // for(int i=0; i<x; i++)cout<<farray[i]<<" ";
    // cout<<endl;
    // print(newarr, newarr.size());
    // return 0;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    // cout << rough(arr, n) << endl;
}