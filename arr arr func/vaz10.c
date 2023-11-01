#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int n, int m, int arr[][m]);
void min_max(int n, int m , int arr[][m]);
void print(int n, int m , int arr[][m]);
int main (){
    srand(time(NULL));
    system("cls");
    int n,m;
    printf("N va M ga qiymat kiriting :");
    scanf("%d %d", &n, &m);
    int arr[n][m];

    random(n,m,arr);
    min_max(n,m,arr);
    print(n,m,arr);
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
void min_max(int n, int m, int arr[][m]){
    int min = arr[0][0];
    int max = arr[0][0];
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    int box = min+max;
    max = box-max; 
    min = box-max;
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m; j++){
                if(arr[i][j] == max){
                    arr[i][j] = min;
                }
                else if(arr[i][j] == min){
                    arr[i][j] = max;
                }
        }
    }
    printf("%d min  %d max",min, max);
    puts("");
}

void print(int n, int m , int arr[][m]){
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m; j++){
              printf("%d ",arr[i][j]);
        }
        puts("");
    }

}