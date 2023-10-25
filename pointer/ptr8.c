#include <stdio.h>
#include <stdlib.h>

void pointer(int *num1, int *num2){
    *num1 = (*num1 + *num2)/2;
}

int main (){
    system("cls");
    int a,b;
    printf("a va b ga Son kiriting : ");
    scanf("%d%d", &a , &b);

    pointer(&a , &b);
    printf("2ta sonning o`rta arifmetigi :%d",a);



    return 0;
}