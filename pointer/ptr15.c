#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int *son , int arr[]);
void print(int *son, int arr[]);
void ozlashtir(int *son , int arr[]);
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
void ozlashtir(int *son, int arr[]){
int box = 1;
    for(int i = 0; i<*son; i++){
        box *=arr[i];
    }
    printf("\n array elementlar ko`paytmasi : %d\n " ,box);
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
        printf("%d ",arr[i]);
    }
}