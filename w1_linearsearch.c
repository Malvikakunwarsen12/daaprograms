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
          int a[n];
          for(int i=0;i<n;i++)
             scanf("%d",&a[i]);
             int val;scanf("%d",&val);
             int flag=0;
             int i=0;
        for( i=0;i<n;i++)
        { 
            
            if(a[i]==val)
            {  
                flag=1;
                printf("Present %d\n",i+1);
            }
        }
        if(flag==0)printf("Not Presnt %d\n",i+1);
    }
}