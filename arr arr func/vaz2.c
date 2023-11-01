#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int n, int m, int arr[][m]);
void teskari(int n, int m , int arr[][m]);
int main (){
    srand(time(NULL));
    system("cls");
    int n,m;
    printf("N va M ga qiymat kiriting :");
    scanf("%d %d", &n, &m);
    int arr[n][m];

    random(n,m,arr);
    teskari(n,m,arr);
    return 0;
}

void random(int n, int m, int arr[][m]){
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = rand() % (10-1)+1;
            printf("%d " ,arr[i][j]);
        }
        puts("");
    }
    puts("");
}
void teskari(int n, int m , int arr[][m]){
    for(int i = 0 ; i<n ; i++){
        for(int j=m-1 ; j>=0; j--){
            printf("%d " ,arr[i][j]);
        }
        puts("");
    }
}
