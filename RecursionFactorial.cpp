// GFG
// RecursionFactorial.cpp
int  fact(int n){
    if(n==0){
        return 1 ;
    }

    return n * fact(n-1);
}
#include "iostream"
using namespace  std;
int main(){
    int n;
    cin>>n;
    cout<< fact(n);
}
