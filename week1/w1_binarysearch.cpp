#include<iostream>
using namespace std;
#define MAX 50
int i=1;
int binarySearch(int a[],int l,int r,int val)
{
    if(l<=r)
   { 
       int mid=l+(r-l)/2;
       if(a[mid]==val)
         return i;
       else if(a[mid]<val){i++;
           return binarySearch(a,mid+1,r,val);}
        else{i++;
          return binarySearch(a,l,mid-1,val);}

   }
   return -1;
}
int main()
{
       int a[MAX];
       int n,val;
       cout<<"Enter size ";
       cin>>n;
       cout<<"Enter the array in sorted order ";

       for(int i=0;i<n;i++)
          cin>>a[i];

          cout<<"Enter the value to be searched ";
          cin>>val;
       
      int index= binarySearch(a,0,n-1,val);
       cout<<index;
       

}