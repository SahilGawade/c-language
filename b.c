
#include <stdio.h>
int main(){
    int arr[5]={10,7,12,8,1};
    int size=5;
    for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
   
    for (int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                 arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
       for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
    }
}
