#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        while (int s!=a){
            printf("* ");
            s++;
        }
        printf("\n");
    }

    return 0;
}

