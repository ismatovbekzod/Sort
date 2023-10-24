#include<stdio.h>
#include<stdlib.h>

void num(float haqiqiy ,int butun);

int main(){
    system("cls");
    float son;
    int daraja;
    printf("son kiriting :");
    scanf("%f", &son);
    printf("darajani kiriting :");
    scanf("%d",&daraja);

    num(son,daraja);
    return 0;
}

void num(float haqiqiy ,int butun){
    float a =1 ;
    for(int i = 1; i<=butun; i++){
        a = a*haqiqiy;
    }
    printf("%g",a);
}
