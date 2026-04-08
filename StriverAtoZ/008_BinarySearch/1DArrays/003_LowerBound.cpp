// iterative

#include <bits/stdc++.h>
using namespace std;

int f(vector<int> arr,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
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
    vector<int> v = {2,5,6,12,16,17};
    cout<<f(v,v.size(),17);
    return 0;
}

// Problem: lower bound -> smallest index such that arr[index]>=x

// lb=lower_bound(v.begin(),v.end(),x)-v.begin(); //-> vector iterator
// lb=lower_bound(arr,arr+n,x); //-> standard array version
// lb=lower_bound(arr+firstidx,arr+secondidx,x); //-> within a window

// These snippets refer to the std::lower_bound function in C++, which is part of the <algorithm> library. It is used to perform a binary search on a sorted range to find the first element that is "not less than" (greater than or equal to) a value x.


