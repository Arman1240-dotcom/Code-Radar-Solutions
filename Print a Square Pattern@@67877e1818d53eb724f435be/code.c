#include<stdio.h>
int main(){
    int a,s=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        while (s!=a){
            printf("* ");
            s++;
        }
        printf("\n");
    }

    return 0;
}

