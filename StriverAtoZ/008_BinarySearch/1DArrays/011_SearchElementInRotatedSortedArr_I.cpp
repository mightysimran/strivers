// no repetition

#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& arr,int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
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
    vector<int> v={7,8,9,1,2,3,4,5,6};
    int x,n=size(v);
    cin>>x;
    cout<<f(v,n,x);
    return 0;
}

// Problem: search element in rotated sorted array
// intuition: identify the sorted half -> left/right