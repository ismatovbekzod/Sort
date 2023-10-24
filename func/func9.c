#include<stdio.h>
#include<stdlib.h>

void yuza(int a,int b);

int main(){
    system("cls");
    int tomon1,tomon2;
    printf("son kiriting :");
    scanf("%d%d", &tomon2, &tomon1);
    yuza(tomon1,tomon2);

    return 0;
}

void yuza(int a,int b){
    int s = a*b;
    printf("Yuza : %d",s);
}