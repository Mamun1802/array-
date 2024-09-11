#include<stdio.h>

int main()
{
    int n,i,count1=0,count2=0;

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
        if(arr[i]%2==0){
         count1++;
        }
        else{
        count2++;
        }
    }
    printf("Total even number is = %d\n",count1);
    printf("Total odd number is = %d",count2);

    printf("\n\nEven numbers are = ");
     for(i=0; i<n; i++)
    {
        if(arr[i]%2==0){
         printf("%d ",arr[i]);
        }
    }
    printf("\nOdd numbers are = ");
    for(i=0; i<n; i++)
    {
        if(arr[i]%2!=0){
         printf("%d ",arr[i]);
        }
    }

    return 0;
}
