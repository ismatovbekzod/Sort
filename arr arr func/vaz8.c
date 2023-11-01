#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int n, int m, int arr[][m]);
void minimal(int n, int m , int arr[][m]);
void maximal(int n, int m, int arr[][m]);
int main (){
    srand(time(NULL));
    system("cls");
    int n,m;
    printf("N va M ga qiymat kiriting :");
    scanf("%d %d", &n, &m);
    int arr[n][m];

    random(n,m,arr);
    maximal(n,m,arr);
    minimal(n,m,arr);
    return 0;
}

void random(int n, int m, int arr[][m]){
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = rand() % (99-10)+10;
            printf("%d " ,arr[i][j]);
        }
        puts("");
    }
    puts("");
}
void maximal(int n, int m, int arr[][m]){
    int max = arr[0][0];
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
        printf("Eng katta qiymat : %d", max);
        puts("");
}

void minimal(int n, int m , int arr[][m]){
        int min = arr[0][0];
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m; j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
        printf("Eng kichkina qiymat : %d", min);
}