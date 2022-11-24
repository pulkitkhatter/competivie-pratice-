#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=10;
    for(int i=0;i<n-2;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            if(arr[low]+arr[high]+arr[i]==sum){
                cout<<low<<" "<<high<<" "<<i<<" "<<endl;
                
            }
            else if(arr[low]+arr[high]+arr[i]<sum){
                low++;
            }
            else 
            high--;
        }
    }    
    return 0;
}