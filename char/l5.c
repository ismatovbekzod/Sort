#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("matn kriitng");
    scanf("%[^\n]s", matn);
    int harf = 0;
    for(int i=0; matn[i] != '\0' ; i++){
        if(islower(matn[i])){
            harf++;
        }
    }
    printf("%d ta son",harf);





    return 0;
}