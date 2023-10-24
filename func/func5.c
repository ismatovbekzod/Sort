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
        qol = son1 % son2;
        printf("%d sonini %d soniga bo`lgandagi qoldiq : %d", son1, son2 ,qol);
    }
    else{
        qol = son2%son1;
        printf("%d sonini %d soniga bo`lgandagi qoldiq : %d", son2, son1 ,qol);
    }
}