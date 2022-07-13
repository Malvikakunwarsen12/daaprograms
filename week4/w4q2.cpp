//quicksort
#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int c=0,s=0;
int partition(int a[],int l,int r)
{
 
   int x=rand()%(r-l+1)+l,pindex=l;
   swap(a[x],a[r]);
   int pivot=a[r];
     for(int i=l;i<r;i++)
     {
          if(a[i]<=pivot)
          {
              swap(a[i],a[pindex]);
              s++;
              pindex++;
          }
          c++;
     }
         swap(a[pindex],a[r]);
return pindex;
}
void quickSort(int a[],int l,int r)
{
   if(l<r)
   { 
       int p=partition(a,l,r);
       quickSort(a,l,p-1);
       quickSort(a,p+1,r);

   }

}
int main()
{
    int a[MAX],n;
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>a[i];

    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
      cout<<endl;
    cout<<"comparisons = "<<c<<endl;
    cout<<"swaps = "<<s;
return 0;
}