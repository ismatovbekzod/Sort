#include<stdio.h>
#include<stdlib.h>

void num(int raqam );

int main(){
    system("cls");
    int son;
    printf("son kiriting :");
    scanf("%d", &son);

    num(son);
    return 0;
}

void num(int raqam){
        int sum=0;
        while(raqam>0){
            sum = sum + raqam%10;
            raqam =raqam/10;
            
        }
        if(sum%2==0){
            printf("raqamlar yig`indisi JUFT True : %d",sum);
        }
        else{
            printf("raqamlar yig`indisi Toq False : %d",sum);
        }
}
