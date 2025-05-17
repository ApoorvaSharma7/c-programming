// Second Largest Element:
// Write a program to find the second largest element in an array.

#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int secondlargest=-1;
    for(i=1;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }
    }
    if(secondlargest==-1){
        printf("no second largest no.");

    }
    else{
        printf("secondlargest no.=%d/n",secondlargest);
    }
    return 0;
}