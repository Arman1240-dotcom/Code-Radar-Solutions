#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,s;
    char c;
    scanf("%d %d %c",&a,&s,&c);
    switch(c){
        case '+':
        printf("%d",(a+s));
        case '-':
        printf("%d",(a-s));
        case '*':
        printf("%d",(a*s));
        case '/':
        printf("%d",(a/s));
    }
    return 0;
}