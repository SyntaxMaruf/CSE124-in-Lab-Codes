#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct student
{
    int id;
    char name[30];
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
struct student *createnode ()
{
    int a;
    char b;
    printf("Enter the id: ");
    scanf("%d",&a);
    printf("Enter the name: ");
    scanf(" %c",&b);
    struct student *newnode;
    newnode = (struct student *)malloc(sizeof(struct student));
    newnode->id = a;
    newnode->name= b;
    newnode->next = NULL;
    return newnode;
}
void insertlast()
{
    struct student *newnode = createnode ();
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct student *i=start;
        while(i->next!=NULL)
        {
            i=i->next;
        }
        i->next = newnode;
    }
}
int main()
{
    insertlast();
     insertlast();
      insertlast();
    traverse();
    return 0;
}


