#include<bits/stdc++.h>
using namespace std;
#define MAX 50
void insertionSort(int a[],int size)
{
  int i,j,key,c=0,s=0;
  for(int i=1;i<size;i++)
  {
      key=a[i];
      j=i-1;
      while(j>=0&&a[j]>key)
          {
              c++;
              a[j+1]=a[j];
              j--;s++;
          }
          if(a[i]==key)
            { c++;}
           else{a[j+1]=key;
               s++;}
  }
  for(int i=0;i<size;i++)
      cout<<a[i]<<" ";
      cout<<endl;
      cout<<"comparisons = "<<c<<endl;
      cout<<"shifts = "<<s;
}
int main()
{
    int a[MAX], n;
     cin>>n;
     for(int i=0;i<n;i++)
        cin>>a[i];
  insertionSort(a,n);
return 0;
}