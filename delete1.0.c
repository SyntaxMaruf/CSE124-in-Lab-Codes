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
    int pos;
    while(1)
    {
        printf("Enter valid (0<pos<n+1) position = ");
        scanf("%d",&pos);
        if(pos>=1 && pos<=n)
        {
            printf("Thank you for enter correct position !\n");
            break;
        }
        else
        {
            printf("Please enter correct position !\n");
        }
    }
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
        printf("%d ",arr[i]);
    return 0;
}
