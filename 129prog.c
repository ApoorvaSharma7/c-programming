// Dynamically allocate an array of size n, take input, and calculate the average.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    float *arr,sum=0.0,avg;
    scanf("%d",&n);
    arr=(float *)malloc(n*sizeof(float));
    for(i=0;i<n;i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
    free(arr);
}