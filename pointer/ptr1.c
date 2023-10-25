#include <stdio.h>
#include <stdlib.h>

void pointer(int *ptr){
    printf("%p", &ptr);
}

int main (){
    system("cls");
    int num;
    printf("Son kiriting : ");
    scanf("%d",num);
    int *ptr = &num;
    pointer(&num);



    return 0;
}