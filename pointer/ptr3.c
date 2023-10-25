#include <stdio.h>
#include <stdlib.h>

void pointer(int *ptr){
    if(*ptr>=10 && *ptr<=99){
        *ptr = (*ptr % 10*10) + (*ptr/10);
    }
    else{
        printf("2 xonalik son kiriting :");
    }

}

int main (){
    system("cls");
    int num;
    printf("Son kiriting : ");
    scanf("%d", &num);

    pointer(&num);

    printf("%d",num);


    return 0;
}