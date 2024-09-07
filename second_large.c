#include<stdio.h>
#include<math.h>

int main(){
int arr[]={65,6,2,70,12,45,78,23};
int first=arr[0];
int second=arr[1];
for(int i=2;i<10;i++){
    if(first<arr[i]){
     second=first;
     first=arr[i];

  }
}
 printf("First largest = %d\n",first);
 printf("Second largest = %d",second);
 return 0;

}
