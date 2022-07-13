#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int main()
{
   int a[MAX], n,i;
   bool b=true;

     cin>>n;

     for(i=0;i<n;i++)
        cin>>a[i];

        sort(a,a+n);
        i=0;
    while(i<n-1)
    {
        if(a[i]==a[i+1])
            {
                cout<<"YES";
               break;
            }
            i++;
    }
    if(i==n-1)
     cout<<"NO";
return 0;
}