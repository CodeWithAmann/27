#include<stdio.h>
int main()
{
    int arr[100];
    int a, i;
    printf("Enter the number for checking which one is smaller \n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("Enter %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = 1000;
    for(i=1;i<a;i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        } 
    }
    printf("The smaller number is %d",min);
    return 0;
}
