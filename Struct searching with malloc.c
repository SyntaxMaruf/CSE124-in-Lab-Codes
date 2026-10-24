#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    int id;
    char name;
    struct student *next;
};
int main()
{
    int found = 0;
    struct student *s1, *s2, *s3;
    s1 = (struct student*)malloc(sizeof(struct student));
    s2 = (struct student*)malloc(sizeof(struct student));
    s3 = (struct student*)malloc(sizeof(struct student));
    s1->id=10;
    s1->name= 'A' ;
    s1->next=s2;
    s2->id=20;
    s2->name= 'B' ;
    s2->next=s3;
    s3->id=30;
    s3->name= 'C' ;
    s3->next=NULL;
    struct student *i=s1;
    while(i!=NULL)
    {
        if(i->id == 40)
            {
                found = 1;
                break;
            }
        i=i->next;
    }
    if(found)
        printf("Element found!\n");
    else
        printf("Element not found!\n");
    return 0;
}

