#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int n, int m, int arr[][m]);
void bubble_sort(int n, int m, int arr[][m]);
int main (){
    system("cls");
    srand(time(NULL));

    int n, m;
    printf("N va M ga qiymat bering :");
    scanf("%d%d", &n , &m);

    int arr[n][m];
    fill_array(n,m, arr);
    bubble_sort(n,m,arr);

    return 0;
}

void fill_array(int n, int m, int arr[][m]){
    for(int i = 0; i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = rand() % (99-10)+10;
            printf("%d " ,arr[i][j]);
        }
        puts("");
    }
    puts("");
}

void bubble_sort(int n, int m, int arr[][m]){
    int sch = 0;
    int count =1;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            for(int k =0 ;k<m;k++){
           if(arr[i][j] == arr[k][j+1]){
            printf("%d ", arr[i][j]);
            }
           }
            }
        }    
}