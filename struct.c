#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float cgpa;
};
typedef struct student Student;
int main()
{
    Student s[2];
     s[0].id=10;
     strcpy(s[0].name,"Maruf");
     s[0].cgpa=3.99;

     s[1].id=20;
     strcpy(s[1].name,"Abir");
     s[1].cgpa=3.83;

      s[2].id=30;
     strcpy(s[2].name,"Saad");
     s[2].cgpa=3.95;

    for(int i=0;i<3;i++)
    {
        printf("Student %d id = %d \nStudent %d name = %s \nStudent %d CGPA= %.2f\n",i+1,s[i].id,i+1,s[i].name,i+1,s[i].cgpa);
    }
    return 0;
}

