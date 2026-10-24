#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Element = ");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int target,pos;
    while(1)
    {
         int found = 0;
        printf("Enter valid element(target) = ");
        scanf("%d",&target);
        for(int i=0; i<n; i++)
        {
            if(arr[i]==target)
            {
                found ++;
                pos =i+1;
                break;
            }
        }
        if(found)
        {
            printf("Thank you for enter correct element !\n");
            break;
        }
        else
        {
            printf("Please enter correct element !\n");
        }
    }
    for(int i=pos-1; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0; i<n-1; i++)
        printf("%d ",arr[i]);
    return 0;
}

