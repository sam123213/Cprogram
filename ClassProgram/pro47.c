// no. pattern

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        //printf("\n"); 

        
        for(j=1;j<=i-1;j++)
        {
            printf("%d",j);
        }
        printf("\n"); 
        
    }
   
}
