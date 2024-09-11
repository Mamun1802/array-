#include<stdio.h>

int main()
{
    int n;
    int i,count1=0,count2=0,count3=0;

    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the values of the array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
      if(arr[i]>0){
       count1++;
      }
      else if(arr[i]<0){
       count2++;
      }
      else{
       count3++;
      }
    }

    printf("Total positive number is = %d ",count1);
    printf("\nTotal negative number is = %d ",count2);
    printf("\nTotal number of zero is = %d ",count3);

    return 0;
}
