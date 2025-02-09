#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case 90...100:
        printf("A");
        case 80...89:
        printf("B");
        case 70...79:
        printf("C");
        case 60...69:
        printf("D");
        default:
        printf("f");
    }

    return 0;
}