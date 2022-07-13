#include<bits/stdc++.h>
using namespace std;
#define MAX 50
void selectionSort(int a[],int size)
{
    int s=0,c=0;
   for(int i=0;i<size;i++)
   {
       int min=i;
       for(int j=i+1;j<size;j++)
       {
              if(a[min]>a[j])
                { min=j;}
                c++;
       }
       if(min!=i)
         {
             swap(a[i],a[min]);
                 s++;
         }
   }
   for(int i=0;i<size;i++)
       cout<<a[i]<<" ";
       cout<<endl;
    cout<<"comparisons = "<<c<<endl;
      cout<<"swaps = "<<s;
}
int main()
{
 int a[MAX], n;
     cin>>n;
     for(int i=0;i<n;i++)
        cin>>a[i];
  selectionSort(a,n);
return 0;
}