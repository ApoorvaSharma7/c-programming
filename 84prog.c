// Void Pointer:
// Create a program using a void * pointer to store and print an integer, a float, and a char.

#include<stdio.h>
int main(){
    int i=10;
    float f=3.14;
    char c='A';
    void *ptr;
    ptr=&i;
    printf("integer %d\n",*(int *)ptr);
    ptr=&f;
    printf("float %.2f\n",*(float *)ptr);
    ptr=&c;
    printf("char: %c\n",*(char *)ptr);
    return 0;
}