/*Print a pattern of stars (*) like this using a for loop

***** 
**** 
***  
** 
* 

 */
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter");
    scanf("%d",&n);
    for (i=n ; i>=1 ;i--){
        for(j=1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}