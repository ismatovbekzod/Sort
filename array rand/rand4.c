#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    system("cls");
    int n, min,max,a=0;
    puts("indexga son kiriting :");
    scanf("%d",&n);
    int arr[n];
    int maximal;
    printf("maximal son kiriting : ");
    scanf("%d", &maximal);
    for(int i=0; i<n; i++)
        {
            arr[i] = rand() % (maximal-1+1)+1;
            printf("%d\t",arr[i]);
        }
        puts("");
        min = arr[0];
        int sanoq=0;
        max = arr[0];
        int maxsanoq=0;
        for(int i =0; i<n; i++)
        {
            if(min>arr[i]){
                min =arr[i];
                sanoq=i;
            }
            if(max<arr[i]){
                max=arr[i];
                maxsanoq= i;
            }
        }
        if(maxsanoq>sanoq){
            printf("katta va kichik orasida  %d shunca son bor\n",maxsanoq-1-sanoq);
        }
        else{
            printf("katta va kichik orasida %d shuncha son bor\n",sanoq-1-maxsanoq);
        }
    return 0;
}