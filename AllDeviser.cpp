// GFG
// AllDeviser.cpp
#include<iostream>
using namespace std;
void alldiv(int n){
for(int i=1; i<=n; i++){
    if(n%i==0){
        cout<<i<<" ";
    }
}
cout<<endl;

}
void alldivisor(int n){
    int i=1;
for(; i*i<n; i++){
    if(n%i==0){
        cout<<i<<" ";
        
    }

}
for(; i>=1; i--){
    if(n%i==0){
            cout<<n/i<<" ";
        }
}
cout<<endl;

}


int main(){
    int n=100;
    alldiv(n);
    cout<<"sec :"<<endl;
    alldivisor(n);
}