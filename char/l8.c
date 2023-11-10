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
        if(isalpha(matn[i])){
            matn[i] = tolower(matn[i]);
            if(matn[i] != 'a' && matn[i] != 'e' && matn[i] != 'i' && matn[i] != 'o' && matn[i] != 'u'){
                harf++;
             }
         }
    }
                    printf("%d ta son",harf);





    return 0;
}