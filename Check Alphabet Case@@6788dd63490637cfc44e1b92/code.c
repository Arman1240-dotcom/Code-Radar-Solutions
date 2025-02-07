#include <stdio.h>



int main() {
    char a;
    printf("Enter alphabet : ");
    scanf("%c",&a);
    if (a>='A' && a<='Z'){
        printf("Uppercase\n");
    }
    else if (a>='a' && a<='z'){
        printf("Lowercase\n");
    }
    return 0;
}