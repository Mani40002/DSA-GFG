// Multiplyleftandrightarraysum.cpp
#include<iostream>
#include<math.h>
using namespace std;

int multiply(int arr[], int n)
{
    // Complete the function
    
 int count1 = 0;
    for(int i = 0 ; i < floor(n/2) ; i++){
        count1 = count1 + arr[i];
    }
    
    int count2 = 0 ; 
    for(int i = n/2 ; i < n; i++){
        count2 = count2 + arr[i];
    }
    return count1 * count2;
}
int main(){

    int arr[]={1,4,7,9,-3};
    int n=5;
    cout<<multiply(arr, n)<<endl;
}
