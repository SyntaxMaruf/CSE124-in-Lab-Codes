#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int target = 20,found = -1,pos;
    for (int i=0; i<n; i++)
    {
        if (arr[i]==target)
        {
            found =1;
            pos =i+1;
            break;
        }

    }
    if(found)
        printf("Element Found and %d position\n",pos);
    else
        printf("Not found!\n");


    return 0;
}
