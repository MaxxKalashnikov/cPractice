#include<stdio.h>

void change_number(int *x){
    *x = *x + 3;
    printf("In the subroutine: x = %d\n", *x);
}

int main(){
    int x;
    printf("Print the number: ");
    scanf("%d", &x);
    printf("In the main program: x = %d\n", x);
    change_number(&x);
    printf("In the main program: x = %d\n", x);
    return 0;
}