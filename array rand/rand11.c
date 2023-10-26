#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    system("cls");
    int n,sanoq;
    printf("Index kiriting :");
    scanf("%d",&n);
    int arr[n];
    int max;
    printf("Maximal qiymatni kiriting :");
    scanf("%d",&max);
    for(int i = 0; i<n;i++)
    {
        arr[i] = rand() % (max-1+1)+1;
        printf("%d\t",arr[i]);
    }
    puts("");
    for(int i = 0;i<n;i++){
        arr[0]
    }
    
    return 0;
}