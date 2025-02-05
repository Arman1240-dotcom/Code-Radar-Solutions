#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,s;
    scanf("%d %d",&a,&s);
    if(a>0 && s<0){
        printf("True");
    }
    else if(a==0 && s==0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}