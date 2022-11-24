#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool power(int a){
    if(a==1)
    return false;
    return (ceil(log2(a))==floor(log2(a)));
}

bool w(int a){
    if(a==0)
    return false;
    while(a!=1){
    if(a%2!=0)
    return false;
    a=a/2;
    }
    return 1; 
}

int main(){
 int a; 
 cin>>a;

cout<<w(a);  
    return 0;
}