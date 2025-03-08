#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int temp=n;
        for (int j=n;j>=1;j--){
            if (j>=(temp-1)){
                printf(" ");
            }else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}