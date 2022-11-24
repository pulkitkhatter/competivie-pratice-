#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a; 
    cout<<"Enter size of array : ";
    cin>>a;
    int arr[a];
    //enter all the element 
    for(int i=0;i<a;i++){
        cout<<"Enter element : ";
        cin>>arr[i];
    } 
    int start=0;
    int end =a-1;
    // swap the numbers starting and end 
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    //printing 
    cout<<endl;
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}