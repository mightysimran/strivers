// no repetitions

#include <bits/stdc++.h>
using namespace std;

int minimumInRotatedSortedArray(vector<int>& arr,int n){
    int low=0,high=n-1,res=INT_MAX,index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        // checks whether search space already sorted
        if(arr[low]<=arr[high]){
            // res=min(res,arr[low]);
            if(arr[low]<res){
                res=arr[low];
                index=low;
            }
            break;
        }
        if(arr[low]<=arr[mid]){
            // res=min(res,arr[low]);
            if(arr[low]<res){
                res=arr[low];
                index=low;
            }
            low=mid+1;
        }
        else{
            // res=min(res,arr[mid]);
            if(arr[mid]<res){
                res=arr[mid];
                index=mid;
            }
            high=mid-1;
        }
    }
    return index;
}

int main()
{
    vector<int> v={5,6,7,8,0,1,2,3,4};
    int n=size(v);
    cout<<minimumInRotatedSortedArray(v,n);
    return 0;
}

// Problem: find out how many times array has been rotated