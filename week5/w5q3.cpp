#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int main()
{
    int c[MAX],k=0, i,j;
   int a[MAX],m;
    cin>>m;
    for( i=0;i<m;i++)
      cin>>a[i];
       int b[MAX],n;
    cin>>n;
    for(i=0;i<n;i++)
      cin>>b[i];
      sort(a,a+m);
      sort(b,b+n);
    i=0;j=0;
       while(i<m&&j<n)
       {
              if(a[i]==b[j])
                {
                    cout<<i<<endl;
                    c[k++]=a[i];
                    i++;j++;
                }
               else if(a[i]<b[j])
                  i++;
                else
                  j++;
       }
  for(i=0;i<k;i++)
     cout<<c[i]<<" ";
return 0;
}