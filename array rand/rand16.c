#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void kichik(int array[],int len);
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
    kichik(arr,n);

    return 0;
}

void kichik(int array[], int len){
    int a = array[0];
    int ind=0;//index raqam
    for(int i = 0; i<len;i++){
        if(a>array[i])
        {
            a=array[i];
            ind++;
        }
    }        printf("%d chi index",ind);

}