#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    system("cls");
    srand(time(NULL));
    int n,max;
    

    printf("Index nectaligini kiriting :");
    scanf("%d", &n);
    printf("Max ga son kiriting :");
    scanf("%d", &max);//arrayni 1dan qaysi songacha qabul qiliwi
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = rand() % (max-1+1)+1;
        printf("%d\t",arr[i]);
    }
    puts("");
    int sanoq=0;
    int kichik = arr[0];
        for(int i =0;i<n;i++){
            if(kichik >arr[i]){
                kichik = arr[i];
                sanoq=i;
            }
        }
        printf("Kichik qiymat : %d\n",kichik);
        printf("%d\t",sanoq);
    


    return 0;
}