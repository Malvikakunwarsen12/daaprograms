//merge sort
#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int c=0;
void merge(int a[],int l,int m,int r)
{
  int i=l,j=m+1,k=l;
   int temp[MAX];
   while(i<=m&&j<=r)
   {
        if(a[i]>=a[j])
            temp[k++]=a[j++];
       
  
    else
        temp[k++]=a[i++];

      c++;  
  }
  while(i<=m)
    { temp[k++]=a[i++];c++;}
       
   while(j<=r)
     { temp[k++]=a[j++];c++;}
     
  for(int i=l;i<=r;i++)
        a[i]=temp[i];
 
   
}
void mergeSort(int a[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=l+(r-l)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }

}
int main()
{
    int a[MAX],n;
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>a[i];

    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
      cout<<a[i]<<" "<<endl;
    cout<<"comparisons = "<<c;
return 0;
}