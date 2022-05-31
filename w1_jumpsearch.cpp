#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int jumpsearch(int a[],int size,int key)
{
    int step=sqrt(size);
    int prev=0;
    while(a[min(step,size)-1]<key)
    {
         prev=step;
         step+=step;
         if(prev>=size)return -1;
    }
    while(a[prev]<key)
    {
      prev++;
      if(prev==size)
          return -1;
    }
    if(a[prev]==key)
      return prev;
    return -1;


}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int key;cin>>key;
  int index=jumpsearch(a,n,key);
  cout<<index;
}