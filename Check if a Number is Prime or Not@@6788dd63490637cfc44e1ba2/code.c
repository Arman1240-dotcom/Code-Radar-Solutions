#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i;
    scanf("%d",&a);
    for (i=2;i<a;i++){
        if (a%i!=0){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}