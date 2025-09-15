#include<stdio.h>
int main()
{
    int n;int count=0;int count2=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //for(int j=1;j<=2;j++)
    
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                printf("%d %d",1,arr[i]);
                printf("\n");
               
            }
            else if(arr[i]>0)
            {
                count++;
                printf("%d %d",count,arr[i]);
                printf("\n");
            }
            else if(arr[i]==0)
            {
                count2++;
                printf("%d %d",count2,arr[i]);
                printf("\n");
            }
        }
    
    return 0;
}