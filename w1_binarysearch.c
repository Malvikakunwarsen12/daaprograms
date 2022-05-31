#include<stdio.h>
#define max 100
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],val;
        for(int i=0;i<n;i++)
          scanf("%d",&a[i]);
          int high=n-1,low=0,mid;
          scanf("%d",&val);
          int i=0,flag=0;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(a[mid]==val)
               {
                   flag=1;
                   printf("Present %d\n",i+1);
                   break;
               }

             else  if(a[mid]>val)
               high=mid-1;
            else
              low=mid+1;
        
               i++;
        }
        if(flag==0)printf("Not present %d\n",i+1);
    }
}