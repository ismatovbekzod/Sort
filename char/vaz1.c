#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("matn kriitng");
    scanf("%[^\n]s", matn);
    int harf = 0;
    int son =0;
    int belgi = 0;
    for(int i=0; matn[i] != '\0' ; i++){
        if(isalpha(matn[i])){
            harf++;
        }
        else if(isdigit(matn[i])){
            son++;
            }
        else if(ispunct(matn[i])){
            belgi++;
        }
    }
    printf("%d ta harf va %d ta son va %d ta belgi",harf,son,belgi);





    return 0;
}