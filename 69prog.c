// Search an Element:
// Write a program to search for a given number in an array (linear search).
#include<stdio.h>
int main(){
    int n,i,a,found=0;
    printf("enter no. of elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter no. you want to find");
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if(arr[i]==a){
            printf(" element is at %d index and at place %d",i,i+1);
            found=1;
            break;
        }
    }
    if(!found){
        printf("element not present");
    }
    return 0;
}