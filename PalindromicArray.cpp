// PalindromicArray.cpp
#include<iostream>
using namespace std;
int rev(int n){
    int rn=0;
    while(n!=0){
        int rem= n%10;
    rn=rn*10+rem;
    n=n/10;
    }
    return rn;
    
}
    int PalinArray(int arr[], int n)
    {
    	// code here
    	for(int i=0; i<n; i++){
    	    // int x=arr[i];
    	    if(arr[i]!=rev(arr[i])){
    	        return 0;
    	    }
            return 1;
    	}
    	
    	
    }

    void valueEqualToIndex(int arr[], int n) {
	    // code here
	    
	    
	    for(int i=1; i<=n; i++){
	        if(arr[i]== i){
	            cout<<i<<endl;
	           
	           
	        }
            cout<<"not"<<endl;
	    }
	   
	}
    int main(){
        int arr[]={1 , 2, 7, 9, 0};
        int n=5;
        // cout<<rev(123)<<endl;
        // cout<<PalinArray(arr,n)<<endl;
        valueEqualToIndex(arr,n);
    }