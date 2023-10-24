#include<stdio.h>
#include<stdlib.h>
void son(son1);

int main(){
    system("cls");
    int a;
    printf("son kiriting :");
    scanf("%d", &a);

    son(a);

return 0;
}
void son(son1)
{
    son1=son1%8;//bu shart sonni 8ga bolgandagi qoldiqni chiqarish uchun
    printf("%d",son1);
}