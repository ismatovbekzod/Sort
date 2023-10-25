#include <stdio.h>
#include <stdlib.h>

void ozlashtir(int *son , int arr[]){
    int oxirgi = 0;
    for(int i = 0; i<*son; i++){
        if(i == *son-1){
            oxirgi = arr[i];
        }
    }
    printf("\n oxirgi elementi %d\n " ,oxirgi);
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