#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter element = ");
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int pos,target,element;
    while(1)
    {
        int found=0;
        printf("Enter valid target = ");
        scanf("%d",&target);
        for(i=0;i<n;i++)
        {
            if(arr[i]==target)
            {
                found=1;
                pos=i+1;
                break;
            }
        }
        if(found)
        {
            printf("Thank you for enter correct target !\n");
            printf("Enter element = ");
            scanf("%d",&element);
            break;
        }
        else
        {
            printf("Please enter correct target !\n");
        }
    }
    for(i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
