#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("Matn kiriting ");
    scanf("%[^\n]s",matn);
    int probel =0;
    for(int i=0; matn[i] != '\0';i++){
        if(isspace(matn[i])){
            probel++;
            }
    }
           printf("Natija : %d",probel);
    

    return 0;
}