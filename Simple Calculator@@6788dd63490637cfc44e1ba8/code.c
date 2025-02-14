#include <stdio.h>
int main() {
    int a,s;
    char c;
    scanf("%d %d %c",&a,&s,&c);
    switch(c){
        case '+':
        printf("%d",(a+s));
        break;
        case '-':
        printf("%d",(a-s));
        break;
        case '*':
        printf("%d",(a*s));
        break;
        case '/':
        printf("%d",(a/s));
        break;
        
        
    }
    return 0;
}