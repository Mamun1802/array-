#include<stdio.h>
int main(){
  int n,i;
  printf("Enter the number of elements in the array:");
  scanf("%d",&n);

  int arr1[n];
  printf("Enter the elements:\n");

  for(i=0;i<n;i++){
   printf("arr[%d]:",i);
   scanf("%d",&arr1[i]);
  }

   printf("Output:");
   for(i=n-1;i>=0;i--){
   printf("%d ",arr1[i]);
  }

}
