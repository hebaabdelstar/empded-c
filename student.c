#include "student.h"
void student_print (struct student s)
{
    printf("the name is :%s\nthe age is :%d\nthe grade is :%c\n",s.name,s.age,s.grade);
}
void student_printarr (struct student *s ,int n)
{
    int i;
    for (i=0;i<n;i++)
        {
            printf("the name is :%s\nthe age is :%d\nthe grade is :%c\n",s[i].name,s[i].age,s[i].grade);
        }
}
void student_printarrref (struct student *s)
{
    printf("the name is :%s\nthe age is :%d\nthe grade is :%c\n",(*s).name,(*s).age,(*s).grade);
}


void cal(int n,int m,calc *c)
{
    (*c).div=n/m;
    (*c).multi=n*m;
    (*c).sub=n-m;
    (*c).sum=n+m;
}



void calcc_print (calc c)
{
    printf("the multi is :%d\nthe div is :%f\nthe sub is :%d\nthe sum is :%d",c.multi,c.div,c.sub,c.sum);
}






