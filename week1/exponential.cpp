#include<bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
using namespace std;
int binary_search(int a[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==x)
        return mid;
        if(a[mid]>x)
        return binary_search(a,l,mid-1,x);
        return binary_search(a, mid+1, r, x);
 
    }
    return -1;
}
int expo_search(int a[],int n,int x)
{
  int i=0;
  if(a[0]==x)
    return 0;
    i=1;
  while(i<n&&a[i]<=x)
  {
      
        i*=2;
  }
   return binary_search(a,i/2,min(i,n-1),x);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int x;
    cin>>x;
    int y=expo_search(a,n,x);
       (y == -1)? cout <<"Element is not present in array"
                 : cout <<"Element is present at index " << y;
   
}