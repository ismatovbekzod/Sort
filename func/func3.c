#include<stdio.h>
#include<stdlib.h>
char marks (char belgi );

int main(){
    system("cls");
    char a;
    printf("xoxlagan belgi kiriting :");
    scanf("%c",&a);

    char func = marks(a);
    printf("%c",func);//a ga har qanday belgi kiritilisa ham faqat H qaytaradi.





    return 0;
}

char marks (char belgi){
    belgi = 'H';
    return belgi;
}