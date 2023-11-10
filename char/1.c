#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    system("cls");
    char arr[100];
    scanf("%[^\n]s",arr);
    for(int i=0; i<26; i++){
        int lamp=0;
        for(int j = 0; j < strlen(arr); j++){
                if(arr[j] == i+97){
                    lamp++;
                    continue;
                }
        }
            if(lamp==0){
                printf("%c ",(char)i+97);
            }
    }
    return 0;
}