#include<stdio.h>
#include<stdlib.h>

void number(int a,int b, int c);

int main(){
    system("cls");
    int son,son1,son2;
    printf("son kiriting :");
    scanf("%d%d%d", &son, &son1, &son2);
    number(son, son1, son2);

    return 0;
}

void number(int a,int b, int c){
    if(a>b && b>c){
            printf("O`rtacha son :%d\n",b);
    }
    else if(a>b && c>a){
        printf("%d\n",a);
    }
    else if (a<b && b>c)
    {
        printf("%d",c);
    }
    else if(a>b && c>b){
        printf("%d",c);
    }
    else{
            printf("%d\n",b);
    }
}
