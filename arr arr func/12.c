void printer(int n, int m , int arr[][m]){
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        puts("");
    }
    puts("");
}
void printer(int n, int m, int arr[][m]);