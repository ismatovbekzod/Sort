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
            }
            if(max<arr[i]){
                max=arr[i];
                
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==max){
                arr[i]=min;
            }
            else if(arr[i]==min){
                arr[i]=max;
            }
            puts("");
            printf("%d\t ",arr[i]);
            
        }

    
    return 0;
}