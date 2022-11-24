#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int se(int arr[],int s,int e,int x){
    if(s>e){
          return -1;
    }
       int mid=(s+e)/2;
       if(arr[mid]==x){
        return mid;
       }
       else if (arr[mid]<x)
       return se(arr,mid+1,e,x);
       else if (arr[mid]>x)
       return se(arr,s,mid-1,x);
  
}
int main(){
    
    int arr[]={1,6,7,8,90};
    int n =sizeof(arr)/sizeof(arr[0]);
cout<<se(arr,0,n-1,1);
    return 0;
}