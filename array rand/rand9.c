#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    system("cls");
    srand(time(NULL));
    int n;
    printf("index kiriting : ");
    scanf("%d", &n);
    int max;
    printf("Maximal qiymatni kiriting :");
    scanf("%d", &max);
    int min;
    printf("Minimal qiymatni kiriting :");
    scanf("%d", &min);
    int arr[n];
    for(int i = 0;i<n;i++){
        arr[i] = rand() % (max-(min)+1)+min;
        printf("%d\t",arr[i]);
    }
    puts("");
    int oxshash = arr[0];
    for(int i = 0 ;i<n;i++){
            if(oxshash == arr[i+1]){
                printf("%d",oxshash);
            }
            else {
                oxshash = arr[i];
            }
    }
    

    return 0;
}
