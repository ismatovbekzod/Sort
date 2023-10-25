#include <stdio.h>
#include <stdlib.h>

void ozlashtir(int *son , int arr[]){
    *son = arr[0];
    printf("\n 1-elementi %d\n " ,*son);
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
    ozlashtir(&ind, arr);



    return 0;
}