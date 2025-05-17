// Pointer to Pointer:
// Demonstrate how to use a pointer to a pointer (int **ptr) to modify a value in a function.
#include<stdio.h>
void updatevalue(int **ptr){
    **ptr=100;
}
int main(){
    int num=50;
    int *p=&num;
    int **pp=&p;
    printf("before:%d\n",num);
    updatevalue(pp);
    printf("after: %d\n",num);
    return 0;
}