#include <bits/stdc++.h>
using namespace std;

int f(vector<int> v,int m){
    int n=v.size();
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]>=m){
            ans=mid;
            high=mid-1;
        } 
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
    int m;
    cin>>m; 
    vector<int> v = {2,5,6,12,12,16,17};
    cout<<f(v,m);
    return 0;
}

// Problem: search insert position -> lower bound