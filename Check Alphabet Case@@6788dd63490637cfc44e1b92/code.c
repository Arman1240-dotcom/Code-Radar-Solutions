#include <stdio.h>



int main() {

    char a;
    printf("Enter alphabet : ");
    scanf("%c",&a);
    if (isupper(a)){
        printf("Uppercase");
    }
    else if (islower(a)){
        printf("Lowercase");
    }
    return 0;
}