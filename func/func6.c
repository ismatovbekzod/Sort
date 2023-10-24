#include<stdio.h>
#include<stdlib.h>
void son(int son1,int son2);

int main(){
    system("cls");
    int a,b;
    printf("son kiriting :");
    scanf("%d%d", &a, &b);

    son(a,b);

return 0;
}
void son(int son1,int son2)
{
    int qol;//qoldiq
    if(son1>son2){
        printf("1: Birichi son ikkinchisidan katta");
    }
    else{
        printf("0: Birinchi son ikkinchisidan kichik");
    }
}