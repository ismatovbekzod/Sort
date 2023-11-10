#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    system("cls");
    char matn[100];
    puts("Matn kiriting ");
    scanf("%[^\n]s",matn);
    int sum=0,t;
    for(int i=0; matn[i] != '\0';i++){
        if(isdigit(matn[i])){
            t = matn[i]-'0';
            sum += t;
            }
    }
           printf("Natija : %d",sum);
    

    return 0;
}