#include <stdio.h>

int main(void){
    int i = 5;
    char j = 'i';
    int sum;

    sum = i + j;
    printf("%d", &sum);
}