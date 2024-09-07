#include<stdio.h>
#include<math.h>

int main(){
int arr[]={2,6,54,5,23};
int maximum=arr[0];
for(int i=1;i<5;i++){
  if(maximum<arr[i]){
    maximum=arr[i];
  }
}
 printf("Maximum= %d",maximum);
 return 0;

}
