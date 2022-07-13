#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int main()
{
   int a[MAX],n;
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>a[i];
  int key;
  cin>>key;
    sort(a,a+n);
    int l=0,r=n-1;
    while(l<r)
    {
        if(a[l]+a[r]==key)
          break;
        else if(a[l]+a[r]<key)
           l++;
        else
           r--;
    }
    if(l>=r)
       cout<<"No such elements found";
       else
         cout<<a[l]<<" "<<a[r];
return 0;
}