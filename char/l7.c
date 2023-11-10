#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("matn kriitng");
    scanf("%[^\n]s", matn);
    int belgi = 0;
    for(int i=0; matn[i] != '\0' ; i++){
        if(ispunct(matn[i])){
            belgi++;
        }
    }
    printf("%d ta belgi",belgi);





    return 0;
}