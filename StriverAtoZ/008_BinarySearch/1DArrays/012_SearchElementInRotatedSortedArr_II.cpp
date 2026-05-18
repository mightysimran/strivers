// repetition
// whether element exists or not; not possible to return index with binary search in case of repetition

#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& arr,int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        // left sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        // right sorted
        else{
            if(arr[mid]<=target && target<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> v={3,3,1,3,3,3,3};
    int x,n=size(v);
    cin>>x;
    if(f(v,n,x)!=-1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}

// TC: log2 n, worst case: n/2
// Problem: search element in rotated sorted array
// intuition: trim down search space; problem exists when element at low, mid and high is same.