#include<stdio.h>
#include<stdlib.h>

void mukammal(int raqam );

int main(){
    system("cls");
    int son;
    printf("son kiriting :");
    scanf("%d", &son);

    mukammal(son);
    return 0;
}

void mukammal(int raqam){
        int sum=0;
        for(int i =1;i<=raqam/2;i++){
        if(raqam % i==0){
            sum+=i;
            }
        }
        if(raqam == sum){
            printf("Mukammal son : %d",sum);
        }
        else{
            printf("Mukamal emas : %d raqamlar yig`indisi",sum);
        }
}
