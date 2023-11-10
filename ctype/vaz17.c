#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("Matn kiriting ");
    scanf("%[^\n]s",matn);
    int sanoq =0;
    for(int i=0; matn[i] != '\0';i++){
        if(isupper(matn[i])){
            if(matn[i] == 'A' || matn[i] =='E' || matn[i] == 'I' || matn[i] == 'O' || matn[i] == 'U'){
                printf("%c ",matn[i]);
            }
        }
    }
    
    return 0;
}