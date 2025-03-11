#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=n/2-1;j>=1;j--){
            printf(" ");
        }
        for (int s=1;s<=n;s++){
            printf("*");
        }
        for (int j=n/2-1;j>=1;j--){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
    
}