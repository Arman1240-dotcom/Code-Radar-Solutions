#include <stdio.h>



int main() {
    char a;
    printf("Enter alphabet : ");
    scanf("%c",&a);
    if (isupper(a)){
        printf("Uppercase\n");
    }
    else if (islower(a)){
        printf("Lowercase\n");
    }
    return 0;
}