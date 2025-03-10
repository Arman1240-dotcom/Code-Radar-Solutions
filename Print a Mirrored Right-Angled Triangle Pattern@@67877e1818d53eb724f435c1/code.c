#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int temp=n;
        for (int j=n-1;j>=1;j--){
            printf(" ");
        }
        for (int s=1;s<=n;s++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}