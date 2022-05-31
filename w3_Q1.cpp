#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    int i,j,key;
  for(int i=1;i<n;i++)
  {
    key=a[i];
    j=i-1;
    while(j>=0&&a[j]>key)
       {
         a[j+1]=a[j];
         j--;
       }
       a[j+1]=key;
  }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
      cout<<"\nArray before sorting\n";
       for(int i=0;i<n;i++)
           cout<<a[i]<<" ";
       insertion_sort(a,n);
        
      cout<<"\nArray before sorting\n";
     for(int i=0;i<n;i++)
      cout<<a[i]<<" ";

}