#include<bits/stdc++.h>
using namespace std;
#define MAX 50
void findSum(int a[],int size,vector<int>&v)
{
  int j,k;
    for(int i=0;i<size;i++)
    {
        k=size-1;
        j=i+1;
        while(j<size&&k>j)
        {
              
            if(a[i]+a[j]==a[k])
             {
                 v.push_back(i+1);
                 v.push_back(j+1);
                 v.push_back(k+1);
              break;
             }
             if(a[i]+a[j]>a[k])
               {
                   j++;
                    k=size-1;
               }
               else k--;

        }

    }

}
int main()
{
   int a[MAX];
   int n;
   cin>>n;
     for(int i=0;i<n;i++)
      cin>>a[i];
   vector<int>v;
   findSum(a,n,v);
if(v.empty())
    cout<<"No sequence found";
else
 {  for(int i=0;i<2;i++)
     cout<<v[i]<<",";
     cout<<v[2];}
return 0;
}