// Allocate memory for n integers using malloc, take input, and display the array.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n , *arr,i;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed");
        return 1;
    }
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    free(arr);
    
}