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
        int sanoq=0;
        for(int i =2; i<=sqrt(raqam); i++){
        if(raqam % i==0){
            sanoq++;
            printf("tub emas %d");
            break;
            }
        }
        if(sanoq == 0 && raqam != 1){
            printf("%d\t",raqam);
        }
        
}
