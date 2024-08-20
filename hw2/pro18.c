//check percentage and grade

#include<stdio.h>
void main()
{
    float phy,che,bio,math,com,total;
    float per;
    printf("Enter the Phy Marks=");
    scanf("%f",&phy);
    printf("Enter the Chem Marks=");
    scanf("%f",&che);
    printf("Enter the Bio Marks=");
    scanf("%f",&bio);
    printf("Enter the Math Marks=");
    scanf("%f",&math);
    printf("Enter the Com Marks=");
    scanf("%f",&com);

    total=phy+che+bio+math+com;

    per=(total/500)*100;

    printf("Percentage=%f",per);

    if(per>=90)
    {
        printf("\nGrade A");
    }
    else if(per>=80)
    {
        printf("\nGrade B");
    }
    else if(per>=70)
    {
        printf("\nGrade C");
    }
    else if(per>=60)
    {
        printf("\nGrade D");
    }
    else if(per>=40)
    {
        printf("\nGrade E");
    }
    else if(per<40)
    {
        printf("\nGrade F");
    }
}