#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    system("cls");
    srand(time(NULL));
    int n=5,max;
    int arr[n];
    printf("Max ga son kiriting :");
    scanf("%d", &max);
    for(int i=0;i<n;i++){
        arr[i] = rand() % (max-1+1)+1;
       
        printf("%d\t",arr[i]);
    }
    puts("");
    int a =arr[1];
        arr[1]=arr[4];
        arr[4]=a;
        for(int i =0;i<n;i++){
        printf("%d\t",arr[i]);
    }


    return 0;
}