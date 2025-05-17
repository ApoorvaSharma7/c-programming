//Pointer Basics:
// Write a program to swap two numbers using pointers.

#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num1,num2;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("before swap %d %d\n",num1,num2);
    swap(&num1,&num2);
    printf("after swap %d %d",num1,num2);
    return 0;

}