#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int n, int m, int arr[][m]);
void plus(int n, int m , int arr[][m]);
void print(int n, int m, int arr[][m]);
int main (){
    srand(time(NULL));
    system("cls");
    int n,m;
    printf("N va M ga qiymat kiriting :");
    scanf("%d %d", &n, &m);
    int arr[n][m];

    random(n,m,arr);
    plus(n,m,arr);
    print(n,m,arr);
    return 0;
}

void random(int n, int m, int arr[][m]){
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = rand() % (10-(-10))-10;
            printf("%d " ,arr[i][j]);
        }
        puts("");
    }
    puts("");
}

void plus(int n, int m , int arr[][m]){
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j] > 0){
                arr[i][j] ='+';
            }
            else if(arr[i][j] < 0){
                arr[i][j] = '-';
            }
        }
    }
}
void print(int n, int m, int arr[][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 0){
                printf("%d ", arr[i][j]);
            }
            else{
            printf("%c ",(char)arr[i][j]);
            }
        }
    puts("");
    }
}
