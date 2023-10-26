#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    system("cls");
    srand(time(NULL));
    int max = 26;
    int min = -12 ;
    int n;
    printf("index kiriting : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n;i++){
        arr[i] = min+rand() % (max-(min)+1);
        printf("%d\t",arr[i]);
    }
    puts("");
    for(int i =0;i<n;i++){
        if(arr[i]<0){
            arr[i]=0;
        }
        else if(arr[i]>0){
            arr[i]=1;
        }
    printf("%d\t",arr[i]);
    }





    return 0;
}
