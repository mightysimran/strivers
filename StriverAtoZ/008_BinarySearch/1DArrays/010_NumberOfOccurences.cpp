#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int>& arr,int n,int x){
    int low=0,high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return first;
}

int lastOccurence(vector<int>& arr,int n,int x){
    int low=0,high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return last;
}

int main()
{
    vector<int> v={1,2,3,4,4,4,4,5,5};
    int x,n=size(v);
    cin>>x;
    int first=firstOccurence(v,n,x);
    int last=lastOccurence(v,n,x);
    if(first==-1){
        cout<<-1<<"\n";
    }
    else{
        cout<<last-first+1;
    }
    return 0;
}

// TC: log2 n
// Problem: number of occurences