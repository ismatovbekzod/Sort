#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void tub(int raqam );

int main(){
    system("cls");
    int son;
    printf("son kiriting :");
    scanf("%d", &son);
    tub(son);
    return 0;
}

void tub(int raqam){
    int a =raqam;
    int sanoq =0;
    for(a; a >= raqam ; a++){
        for(int i = 2; i<=sqrt(a); i++){
            if(a % i==0){
            sanoq++;
        }
    }
        if(sanoq == 1){
            printf("%d",raqam);
            break;
        }
    }
}