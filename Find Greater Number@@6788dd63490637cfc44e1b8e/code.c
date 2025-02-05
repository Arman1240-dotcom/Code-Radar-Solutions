#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,s;
    scanf("%d %d",&a,&s);
    if (a>s){
        pirntf("%d",a);
    }
    else{
        printf("%d",s);
    }
return 0;
}