#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int st(int a){
    if(a==0||a==1)
    return a;
    int start=1,end=a/2,ans;
    while(start<=end){
    int mid=(start+end)/2;
    int st=mid*mid;
    if(st==a)
    return mid;
    else if(st<a){
    start=start+1;
    ans=mid;
    }
    else 
    end=mid-1;
    }
    return ans;
} 
int main(){
    int a; 
    cin>>a;
    cout<<st(a);   
    return 0;
}