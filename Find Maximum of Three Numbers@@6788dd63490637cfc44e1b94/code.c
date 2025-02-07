#include <stdio.h>

int main() {
    int a,s,d;
    scanf("%d %d %d",&a,&s,&d);
    (a>s && s>d)?printf("%d",a):
    (s>a && a>d)?printf("%d",s):
    printf("%d",d);
    return 0;
}