#include<stdio.h>
int main(){
    int a,s;
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

