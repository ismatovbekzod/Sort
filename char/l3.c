#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("matn kriitng");
    scanf("%[^\n]s", matn);
    int son = 0;
    for(int i=0; matn[i] != '\0' ; i++){
        if(isdigit(matn[i])){
            son++;
        }
    }
    printf("%d ta son",son);





    return 0;
}