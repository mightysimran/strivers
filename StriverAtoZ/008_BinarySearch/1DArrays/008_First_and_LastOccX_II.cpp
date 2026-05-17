// optimal - with concept of lower bound and upper bound

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[]={1,2,3,4,4,4,5};
    int x,n=size(v);
    cin>>x;
    int lb=lower_bound(v,v+n,x)-v;
    if(lb==n||v[lb]!=x){
        cout<<-1<<" "<<-1<<"\n";
        return 0;
    }
    cout<<lb<<" "<<upper_bound(v,v+n,x)-v-1<<"\n";
    return 0;
}

// TC: 2log2 n
// SC: 1
// Problem: first and last occurence (index) of X