#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fun1(int arr[],int s,int e,int x){
    if(s<=e)
 {   int mid=(s+e)/2;
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]>x){
        return fun1(arr,s,mid-1,x);
    }
        return fun1(arr,mid+1,e,x);
}
    return -1;
}
int main(){
    int arr[]   ={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<fun1(arr,0,n-1,6);
    return 0;
}