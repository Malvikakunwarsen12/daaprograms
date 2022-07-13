#include<bits/stdc++.h>
using namespace std;
#define MAX 50

int main()
{
    int a[MAX],n;
    cin>>n;
    for(int i=0;i<n;i++)
      cin>>a[i];

   int k;
   cin>>k;
      
       priority_queue<int>maxheap;
        for(int i=0;i<n;i++)
            maxheap.push(a[i]);
        
        for(int i=0;i<k-1;i++)
            maxheap.pop();
       cout<<"Kth largest element = "<<maxheap.top()<<endl;

     
      priority_queue<int,vector<int>,greater<int>>minheap;
        for(int i=0;i<n;i++)
            minheap.push(a[i]);
        
        for(int i=0;i<k-1;i++)
            minheap.pop();
       cout<<"Kth smallest element = "<<minheap.top()<<endl;
       
return 0;
}