#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// find the triplet which is sum of number;
void find3(int arr[],int size,int sum){

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=10;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==sum)
            cout<<i<<" "<<j<<" "<<k<<" "<<endl;
        }
        }
    }
    return 0;
}