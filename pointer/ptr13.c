#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int *son , int arr[]);
void print(int *son, int arr[]);
void ozlashtir(int *son , int arr[]){
int min = 0;
    for(int i = 0; i<*son; i++){
        if(i == 0){
            min = arr[i];
        }
    }
    printf("\n Eng kichik element : %d\n " ,min);
}

int main (){
    system("cls");
    int ind;
    printf("Index kiriting : ");
    scanf("%d", &ind);
    int arr[ind];
    for(int i=0 ; i<ind ; i++){
        printf("%d chi indexiga qiymat bering ",i);
        scanf("%d", &arr[i]);
    }
    bubble_sort(&ind, arr);
    print(&ind , arr);
    ozlashtir(&ind, arr);



    return 0;
}

void bubble_sort(int *son, int arr[]){

    for(int i = 0; i<*son ;i++){
        for(int j = i + 1 ; j < *son ; j++){
            if(arr[i] > arr[j]){
               int box =arr[i];
                arr[i] = arr[j];
                arr[j] = box;
            }
        }
    }
}
void print(int *son, int arr[]){
    for(int i=0; i<*son ; i++){
        printf("%d\t",arr[i]);
    }
}