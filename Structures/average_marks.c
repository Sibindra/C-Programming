#include <stdio.h>

struct student
{
    char name[10];
    int roll_no;
    int english;
    int math;
    int science;
};

void main()
{
    struct student s;

    int i;

    for (i=0;i<10;i++)
    {
        printf("Enter the name:");
        gets(s.name);

        printf("Enter roll no:");
        scanf("%d",&s.roll_no);

        printf("Enter the marks is english,maths and science:\n");
        scanf("%d%d%d",&s.english,&s.math,&s.science);
    }

    for (i=0;i<10;i++)
    {
        if ( ((s.english+s.math+s.science)/3) > 50)
        {
            printf("Name:%s\nMarks in:\nEnglish:%d\nMaths:%d\nScience:%d\n",s.english,s.math,s.science);
        }
    }

}