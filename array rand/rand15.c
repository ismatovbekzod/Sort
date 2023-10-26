#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void katta(int array[],int len);
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
    katta(arr,n);

    return 0;
}

void katta(int array[], int len){
    int a = array[0];
    for(int i = 0; i<len;i++){
        if(a>array[i])
        {
            a=array[i];
        }
    }        printf("%d",a);

}