#include<stdio.h>

int main(){

   int n,sum=0;

   printf("Enter the last number of the fibonacci series:");
   scanf("%d",&n);

   for(int i=1;i<=n;i++){
    sum=sum+i;
   }
   printf("Sum of the series is = %d",sum);

   return 0;
}
