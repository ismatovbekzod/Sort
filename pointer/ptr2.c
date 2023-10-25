#include <stdio.h>
#include <stdlib.h>

void pointer(int *ptr){
    *ptr = *ptr * *ptr;

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