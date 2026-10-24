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
    int target;
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
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=target)
        {
            arr[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
        printf("%d ",arr[i]);


    return 0;
}


