#ifndef STUDENT_H_
#define STUDENT_H_




typedef struct student
{
    char name [20];
    int age ;
    char grade;

}std_t;

typedef struct calculator
{
    int sum ;
    int multi;
    int sub;
    float div;

}calc ;


void student_print (struct student s);
void calcc_print (calc c);
void student_printarr (struct student *s,int n);
void student_printarrref (struct student *s);
void cal(int n,int m,calc *c);
#endif // STUDENT_H_



