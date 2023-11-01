#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random(int n, int m, int arr[][m]);
void changer(int n, int m , int arr[][m]);
void maximal(int n, int m, int arr[][m]);
int main (){
    srand(time(NULL));
    system("cls");
    int n,m;
    printf("N va M ga qiymat kiriting :");
    scanf("%d %d", &n, &m);
    int arr[n][m];

    random(n,m,arr);
    changer(n,m,arr);
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    return 0;
}

void random(int n, int m, int arr[][m]){
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = rand() % (99-(-10)+1)-10;
            printf("%d " ,arr[i][j]);
        }
        puts("");
    }
    puts("");
}
void changer(int n, int m , int arr[][m]){
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m; j++){
            int box = arr[i][0]+arr[i][m-1];
            arr[i][0] = box -arr[i][0];
            arr[i][m-1] = box -arr[i][0];
            if(arr[i][0] < 0){
                arr[i][0] *= -1;
            }
            if(arr[i][m-1]< 0){
            arr[i][m-1] *=-1;
            }
        }
        puts("");
    }
}