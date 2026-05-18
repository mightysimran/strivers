// repetition

#include <bits/stdc++.h>
using namespace std;

int minimumInRotatedSortedArray(vector<int>& arr,int n){
    int low=0,high=n-1,res=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            res=min(res,arr[low]);
            low++;
            high--;
            continue;
        }
        if(arr[low]<=arr[mid]){
            res=min(res,arr[low]);
            low=mid+1;
        }
        else{
            res=min(res,arr[mid]);
            high=mid-1;
        }
    }
    return res;
}

int main()
{
    vector<int> v={3,3,1,3,3,3,3};
    int n=size(v);
    cout<<minimumInRotatedSortedArray(v,n);
    return 0;
}

// Problem: minimum in rotated sorted array