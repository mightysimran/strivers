// recursive

#include <bits/stdc++.h>
using namespace std;

int f(vector<int> arr,int low,int high, int target){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(target>arr[mid]){
        return f(arr,mid+1,high,target);
    }
    return f(arr,low,mid-1,target);
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    cout<<f(v,0,v.size()-1,17);
    return 0;
}
// TC: log2 n
// Problem: search X in a sorted array
