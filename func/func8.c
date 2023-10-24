#include<stdio.h>
#include<stdlib.h>

void tartib(int son);

int main(){
    system("cls");
    int a;
    printf("son kiriting :");
    scanf("%d",&a);

    tartib(a);

    return 0;
}
void tartib(int son){

    for(int i =1;i<son;i++){
        printf("%d\n",i);
    }
}