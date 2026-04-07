// iterative

#include <bits/stdc++.h>
using namespace std;

int f(vector<int> arr, int n, int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    cout<<f(v,v.size(),17);
    return 0;
}

// TC: log2 n
// Problem: search X in a sorted array