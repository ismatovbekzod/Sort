#include <stdio.h>
#include <stdlib.h>

void pointer(float *ptr){
    printf("%d" , (int)*ptr);

}

int main (){
    system("cls");
    float num;
    printf("Son kiriting : ");
    scanf("%f", &num);

    pointer(&num);



    return 0;
}