#include<stdio.h>
#include<stdlib.h>

void juft(int n);
void toq(int n);

int main(){
    system("cls");
    int son;
    printf("son kiriting :");
    scanf("%d", &son);
    juft(son);
    toq(son);

    return 0;
}

void juft(int n)
        {
    for(int i =1;i<=n;i++)
        {
        if(i%2==0){
            printf("%d\t",i);
                    }
            }   
            printf("juft sonlar\n");
        }
void toq(int n)
{
    for(int i =1;i<=n;n--)
        {
        if(n%2==1){
            printf("%d\t",n);
                  }
        }   
            printf("toq sonlar\n");
}

        