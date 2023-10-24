#include<stdio.h>
#include<stdlib.h>

void number(int a,int b);

int main(){
    system("cls");
    int son,son2;
    printf("son kiriting :");
    scanf("%d%d", &son,&son2);
    number(son,son2);

    return 0;
}

void number(int a,int b){
    if(a>b){
        
        for(;a>b;a--)
        {
            printf("%d\n",a);
        }
    }
    else{
        for(;b>a;b--)
        {
            printf("%d\n",b);
        }
    }
}