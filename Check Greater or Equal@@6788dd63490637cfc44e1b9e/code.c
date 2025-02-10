#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,s;
    scanf("%d %d",&a,&s);
    if (a>=s){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}