#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    system("cls");
    srand(time(NULL));
    int max = 70;
    int min = -11;
    int n;
    printf("index kiriting : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n;i++){
        arr[i] = min+rand() % (max-(min)+1);
        printf("%d\t",arr[i]);
    }
    puts("");
    int k;
    printf("k ga qiymat bering :");
    scanf("%d", &k);
    for(int i =n-k;i<n;i++){
        printf("%d\t",arr[i]);
    }
   for(int i = 0;i<n-k;i++){
        printf("%d\t",arr[i]);
    }

  





    return 0;
}
