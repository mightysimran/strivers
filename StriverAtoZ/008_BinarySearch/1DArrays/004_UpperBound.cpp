#include <bits/stdc++.h>
using namespace std;

int f(vector<int> arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
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
    vector<int> v = {2,5,6,12,12,12,16,17};
    cout<<f(v,v.size(),12);
    return 0;
}

// Problem: upper bound -> smallest index such that arr[index]>x

// ub=upper_bound(v.begin(),v.end(),x)-v.begin(); //-> vector iterator
// ub=upper_bound(arr,arr+n,x); //-> standard array version
// ub=upper_bound(arr+firstidx,arr+secondidx,x); //-> within a window