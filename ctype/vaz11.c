#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("Matn kiriting ");
    scanf("%[^\n]s",matn);
    int son =0,harf=0;
    for(int i=0; matn[i] != '\0';i++){
        if(isdigit(matn[i]))
        {
            son++;
        }
        if (isupper(matn[i]))
            {   
                harf++;
            }
            
    }
           printf("Sonlar :%d ta Katta harflar %d ta ayirmasi: %d",son, harf, son-harf);
    

    return 0;
}