#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int findFreq(int a[],int val,int size)
{
    int l=0,r=size-1;
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]<val)
             l=mid+1;
        else 
          r=mid;
    }
    int first=l;
    r=size-1;
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]>val)
             r=mid;
        else 
          l=mid+1;
    }
    return l-first;
   
}
int main()
{
    int a[MAX],n;
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>a[i];

      int val;
      cin>>val;
      cout<<val<<" - "<<findFreq(a,val,n);
return 0;
}