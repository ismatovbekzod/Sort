#include <stdio.h>
#include <stdlib.h>

void pointer(int *num1, int *num2, int *num3){
   
    if(*num2 > *num3 && *num3 > *num1){
        *num2 = *num3;
    }
    else if(*num1 > *num2 && *num3 > *num1 || *num1 < *num2 && *num1 > *num3){
             *num2 = *num1;
    }

}

int main (){
    system("cls");
    int a,b,c;
    printf("qiymatlarni kiriting :");
    scanf("%d%d%d", &a , &b , &c);

    pointer(&a , &b , &c);
    printf("Sonlarning o'rtachasi :%d",b);



    return 0;
}