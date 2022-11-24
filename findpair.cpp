#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// we have to find pair using two pointers
int main(){
    int arr[]={1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    int sum;
    cout<<"Enter sum you want to find :: ";
    cin>>sum;
    sort(arr,arr+n);
    while(i<j){
        if(arr[i]+arr[j]==sum){
        cout<<"yes"<<endl;
        cout<<i<<" "<<j;
        break;}
        else if(arr[i]+arr[j]<sum){
            i++;
        }
        else 
        j--;
    }
    return 0;
}