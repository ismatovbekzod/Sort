#include<stdio.h>
#include<stdlib.h>

void check(son);

int main(){
    system("cls");
    int a;
    printf("son kiriting :");
    scanf("%d",&a);

    check(a);

    return 0;
}

void check(son){
    if(son>0){
        printf("bu son musbat");
    }
    else if (son==0)
    {
        printf("son 0 ga teng");
    }
    else {
        printf("bu son manfiy");
    }    
}