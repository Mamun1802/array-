#include<stdio.h>
#include<math.h>

int main(){
   int arr[]={1,2,4,5};
   int n=5;
   int originalSum,actualSum=0;

   originalSum=(n*(n+1))/2;
   for(int i=0;i<4;i++){
    actualSum=actualSum+arr[i];
   }

   //find the missing number
    int missingNumber=originalSum-actualSum;


      //Print the missing number
      printf("The missing number is = %d",missingNumber);

 return 0;
}
