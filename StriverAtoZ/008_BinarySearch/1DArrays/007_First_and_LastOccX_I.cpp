// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[]={1,2,3,4,4,4,5};
    int first=-1,last=-1;
    int x,n=size(v);
    cin>>x;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            if(first==-1){
                first=i;
            }
            last=i;
        }
    }
    cout<<first<<" "<<last<<"\n";
    return 0;
}

// TC: n
// Problem: first and last occurence (index) of X