#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int main()
{
   
    int a[MAX];
   int n;
   cin>>n;
     for(int i=0;i<n;i++)
      cin>>a[i];
   
   int key,count=0,r,l;
   cin>>key;
   sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        l=i;
        r=n-1;
          while(l<r)
          {
             if(a[r]-a[l]==key)
             {
                 count++;
                break;
             }
             else if(a[r]-a[l]>key)r--;
             else l++;
          } 
    }
  
    cout<<count;

return 0;
}