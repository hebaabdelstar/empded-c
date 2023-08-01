#include <stdio.h>
#include <stdlib.h>
#include "student.h"


int main()
{
    struct student s, s1={"ali",25,'c'};
    s=s1;
    student_print(s);
   // tudent_print(s1);
    struct student courses[20]={{"ali",25,'c'},{"ahmed",18,'a'}};

    //student_printarr(courses,20);
    //student_printarrref (&s);
   // printf ("%d",courses[0].age);
  /*  calc c;
    int x,y;
     printf("enter the first number :");
    scanf("%d",&x);
    printf("enter the second number :");
    scanf("%d",&y);
    cal(x,y,&c);
    calcc_print ( c);
    /*float x,y,z;
    printf("enter the first number :");
    scanf("%d",&x);
    printf("enter the second number :");
    scanf("%d",&y);
    printf("the division is :%d",x);
    printf("the multibluy is :%d",y);*/






    return 0;
}
