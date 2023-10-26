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
    for(int i = 0; i<n;i++){
        arr[i] = rand() % (max-1+1)+1;
        printf("%d\t",arr[i]);
    }
    puts("");
    for(int i = 0; i<n;i++)
    {
        int sanoq = 0;
        for(int j=2;j<arr[i];j++)
        {
        if(arr[i] % j==0)
        {
            sanoq =1;
            break;
        }
        }
        if(sanoq ==0 && arr[i] != 1 )
        {
            printf("Tubson: ");
            printf("%d\t",arr[i]);
        }
    }
    
    return 0;
}

