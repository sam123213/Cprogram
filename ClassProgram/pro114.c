//simple code realloc

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p1,*p2,i;
    p1=(int*)calloc(sizeof(int),5);
    printf("Array elements are as follows=\n");
    for(i=0;i<5;i++)
    {
        printf("\nAddress of block %d=%d",i+1,(p1+i));
    }

    p2=(int*)realloc(p1,10);
    for(i=0;i<10;i++)
    {
        printf("\nAddress of block %d=%d",i+1,(p2+i));
    }
    free(p2);
}