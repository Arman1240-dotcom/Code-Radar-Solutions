#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    int s=1;
    for (i=2;i<a;i++){
        if (a%i==0){
            s=s-1;
        }
    }
    if (s==1){
        printf("Prime");
    }else if(s==0){
        printf("Not Prime");
    }
    return 0;
}