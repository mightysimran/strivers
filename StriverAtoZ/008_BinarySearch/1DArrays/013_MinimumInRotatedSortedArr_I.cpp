// no repetition

#include <bits/stdc++.h>
using namespace std;

int minimumInRotatedSortedArray(vector<int>& arr,int n){
    int low=0,high=n-1,res=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
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
    vector<int> v={5,6,0,1,2,3,4};
    int n=size(v);
    cout<<minimumInRotatedSortedArray(v,n);
    return 0;
}

// Problem: minimum in rotated sorted array
// intuition: identify the sorted half; sorted half may or may not have the minimum element, so take the minimum from the sorted half and remove that half.