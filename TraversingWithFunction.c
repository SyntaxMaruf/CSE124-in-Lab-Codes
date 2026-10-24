#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int id;
    char name;
    struct student *next;
};
struct student *start=NULL;
void traverse()
{
    struct student *i = start;
    while (i != NULL)
    {
        printf("%d %c\n", i->id, i->name);
        i = i->next;
    }

}

int main()
{
    struct student *s1, *s2, *s3 ;

    s1 = (struct student *)malloc(sizeof(struct student));
    s2 = (struct student *)malloc(sizeof(struct student));
    s3 = (struct student *)malloc(sizeof(struct student));

    s1->id = 10;
    s1->name= 'A';
    s1->next = s2;

    s2->id = 20;
    s2->name='B';
    s2->next = s3;

    s3->id = 30;
    s3->name='C';
    s3->next = NULL;
    start = s1;

    printf("Before deletion linked list : \n");
    traverse();
    start = start->next;

    printf("\nAfter deletion linked list : \n");
    traverse();
    return 0;
}

