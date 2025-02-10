#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    int s=1;
    for (i=0;i<a;i++){
        if (a%i==0){
            s==0;
        }
    }
    if (s==1){
        printf("Prime");
    }else if(s==0){
        printf("Not Prime");
    }
    return 0;
}