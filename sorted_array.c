#include<stdio.h>

int main()
{
    int n;
    int i,j,temp;

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
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }

    }
    printf("Sorted array is = ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    int length,quotient;
    float median;
    length=sizeof(arr)/sizeof(arr[0]);
    if(length%2==0)
    {
        quotient=length/2;
        median=(arr[quotient]+arr[quotient-1])/(float)2;
    }
    else
    {
        quotient=length/2;
        median=arr[quotient];

    }
    printf("Median is = %.2f",median);
    return 0;
}
