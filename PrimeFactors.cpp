// GFG
// PrimeFactors.cpp
#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    // for(int i=2; i*i<=n; i++){
    //     if(n%i==0){
    //         return false;
    //     }
    // }
    return true;
}
void primefactor(int n){
    if(n<=1){
        cout<<"enter valid number"<<endl;
    }
    while(n%2==0){
        cout<<"2"<<" ";
        n=n/2;
    }
    while(n%3==0){
        cout<<"3"<<" ";
        n=n/3;
    }
    for(int i=5; i*i<=n; i=i+6){
            while(n%i==0){
                cout<<i<<" ";
                n=n/i;
                
            }
            while(n%(i+2)==0){
                cout<<i+2<<" ";
                n=n/(i+2);
            }

        

    }
    if(n>3){
        cout<<n<<endl;
    }
    
}
void IsPrimeFactor(int n){
    for(int i=2; i*i<=n; i++){
        if(isprime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<" ";
                x=x*i; 
            }
        }
    }
}
int main(){
    // int n=4;
    // cin>>n;
    // cout<<isprime(n)<<endl;
    // cout<<"first : "<<endl;
    // IsPrimeFactor(n);
    // cout<<endl;
    cout<<"second : first "<<endl;
    primefactor(398);
//     cout<<"second : "<<endl;
//     primefactor(5);
//     cout<<"second : "<<endl;
//     primefactor(17);
//     cout<<"second : "<<endl;
//     primefactor(120);
//     cout<<"second : "<<endl;
//     primefactor(100);
//     cout<<"second : "<<endl;
//     primefactor(164);
//     cout<<"second : "<<endl;
//     primefactor(21);

}