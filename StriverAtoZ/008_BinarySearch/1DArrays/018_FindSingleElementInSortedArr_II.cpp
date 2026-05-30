// optimized

#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& v,int n){
    if(n==1){
        return v[0];
    }
    if(v[0]!=v[1]){
        return v[0];
    }
    if(v[n-1]!=v[n-2]){
        return v[n-1];
    }
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]!=v[mid-1]&&v[mid]!=v[mid+1]){
            return v[mid];
        }
        // condtn
        if((mid%2==1&&v[mid-1]==v[mid])or(mid%2==0&&v[mid]==v[mid+1])){
            low=mid+1; // eliminate left half
        }
        else{
            high=mid-1; // eliminate right half
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

// TC: log2 n
// Problem: find single element in sorted array
// intuition: 
// (even,odd) -> left half, element in right half
// (odd,even) -> right half, element in left half
// do not include first and last element in search space