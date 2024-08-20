//count frequency of each element in an array. 

#include<stdio.h>
void main()
{
    int a[50],f[50],r,i,j,cnt;
    printf("Enter the array size=");
    scanf("%d",&r);
    printf("Enter the No.");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    printf("Array Element as follows:\n");
    for(i=0;i<r;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<r;i++)
    {
        cnt=1;
        for(j=i+1;j<r;j++)
        {
            if(a[i]==a[j])
            {
                cnt++;
                a[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=cnt;
        }
    }
    printf("\nFrequency of all elements in the array:\n");
    for (i = 0; i < r; i++) 
    {
        if (f[i] != 0) 
        {
            printf("%d occurs %d times\n", a[i], f[i]);
        }
    }
}