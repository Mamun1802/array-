#include<stdio.h>
#include<math.h>

int main(){
int arr[]={65,6,2,5,23};
int minimum=arr[0];
for(int i=1;i<5;i++){
    if(minimum>arr[i]){
     minimum=arr[i];
  }
}
 printf("Minimum= %d",minimum);
 return 0;

}
