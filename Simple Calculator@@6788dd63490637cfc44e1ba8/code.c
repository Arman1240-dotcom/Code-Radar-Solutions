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
        if (s != 0) {  // Check for division by zero
            printf("%d", a / s);
        } else {
            printf("Error: Division by zero");
            }
        break;  // Exit the switch after the operation
        
        
    }
    return 0;
}