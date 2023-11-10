#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("Matn kiriting ");
    scanf("%[^\n]s",matn);
    for(int i=0; matn[i] != '\0';i++){
        if(islower(matn[i])){
           printf("%c ",matn[i]);
            }
    }
    
    

    return 0;
}