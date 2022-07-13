#include<bits/stdc++.h>
using namespace std;
#define MAX 50
void countSort(char a[],int size)
{
     int cnt_arr[MAX];

 for(int i=0;i<27;i++)
    cnt_arr[i]=0;
    
   for(int i=0;i<27;i++)
          ++cnt_arr[a[i]-97];

     int maxi= *max_element(cnt_arr, cnt_arr + size);
     if(maxi>1)
     {for(int i=0;i<size;i++)
     {
         if(cnt_arr[i]==maxi&&maxi>1)
           {
               cout<<char(i+97)<<"-"<<maxi;
               break;
           }
     }  }
     else
      cout<<"No duplicates found";
    
}
int main()
{
   char a[MAX];
int n;
    cin>>n;

    for(int i=0;i<n;i++)
      cin>>a[i];
 countSort(a,n);
return 0;
}