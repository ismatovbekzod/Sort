#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("matn kriitng");
    scanf("%[^\n]s", matn);
    int harf = 0;
    int son = 0;
    for(int i=0; matn[i] != '\0' ; i++){
        if(isdigit(matn[i])){
            son++;
        }
        else if(isalpha(matn[i])){
            harf++;
                }
    }
    printf("%d ta harf va %d ta son",harf,son);





    return 0;
}