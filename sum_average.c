#include<stdio.h>

int main()
{
    int n,i,sum=0;

    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the values of the array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    float average=(float)sum/n;
    printf("Sum is = %d\n",sum);
    printf("Average is = %.2f",average);

    return 0;
}
