// brute force

#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& v,int n){
    if(n==1){
        return v[0];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            if(v[i]!=v[i+1]) return v[i];
        }
        else if(i==n-1){
            if(v[i]!=v[i-1]) return v[i];
        }
        else{
            if(v[i]!=v[i-1]&&v[i]!=v[i+1]){
                return v[i];
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> v={1,1,2,2,3,3,4,5,5};
    int n=v.size();
    cout<<f(v,n);
    return 0;
}

// TC: n
// Problem: find single element in sorted array