#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("matn kriitng");
    scanf("%[^\n]s", matn);
    int sanoq=0;
    for(int i=0; matn[i] != '\0' ; i++){
        if(matn[i] == isdigit(matn[i])){
            sanoq = i;
            break;
        }
    }
        for(int j = sanoq ; matn[j]='\0'; j++){
                printf("%c" ,matn[j]);
            
        }


    return 0;
}