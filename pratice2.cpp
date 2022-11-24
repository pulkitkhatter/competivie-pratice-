//given a soorted array arr [] of n elements, write a 
//function to serach a given element x in arr[]
// and return the index of x in the array 
// return -1 if not present 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void fill_element(int arr[],int size){
 for(int i=0;i<size;i++){
        cout<<"Enter element in array at index "<<i <<" :";
        cin>>arr[i];
    }   
}

void linear_search (int arr[],int element, int size){
bool m =false ;
    for(int i=0;i<size;i++){
        if(element==arr[i]){
            cout<<"element found at index : ";
            cout<<i<<endl;
            m=true;
            break;
        }
    }
    if(m==false){
        cout<<"-1"<<endl;
    }
}

void binary_search(int arr[],int element, int size ){
    
}
int main(){
    int a=1;
    while(a){
    int size; 
    cout<<"Enter the size of array";
    cin>>size; 
    int arr[size];
   fill_element(arr,size);
    int find_element; 
    cout<<"Enter element you want to find : ";
    cin>>find_element;
    linear_search(arr,find_element,size);
    cout<<"do you want to continue : 1 or 0";
    cin>>a;
    }
    return 0;
}