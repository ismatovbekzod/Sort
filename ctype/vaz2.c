#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("Matn kiriting ");
    scanf("%[^\n]s",matn);
    int raqam =0; 
    int harf =0;
    for(int i=0; matn[i] != '\0';i++){
        if(isdigit(matn[i])){
            raqam++;
            }
        if(isalpha(matn[i])){
            harf++;
        }
    }
    printf("%d ta raqam va %d ta harf ",raqam,harf);
    

    return 0;
}