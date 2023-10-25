#include <stdio.h>
#include <stdlib.h>

void pointer(int *num1, int *num2){
    if(*num1 > *num2){
        *num2 = *num1; 
    }
    else{
        *num1 = *num2;
    }
}

int main (){
    system("cls");
    int a,b;
    printf("a va b ga Son kiriting : ");
    scanf("%d%d", &a , &b);

    pointer(&a , &b);
    printf("a soni :%d b soni : %d",a,b);



    return 0;
}