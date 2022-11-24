#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,6,7,8,90};
    int n =sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int element;
    cout<<"Enter the element you want to find";
    cin>>element;
    while(start<=end)   {
    int mid=(start+end)/2;
    if(arr[mid]==element){
        cout<< mid<<endl;
        break;
    }
    else if(arr[mid]>element){
        end=mid-1;
    }
    
    else if(arr[mid]<element){
        start=mid+1;
    }
    }
    return 0;
}