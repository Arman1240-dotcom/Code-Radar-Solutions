#include <stdio.h>



int main() {
    int a,s,d;
    scanf("%d %d %d",a,s,d);
    (a>s && a>d)?printf(a):
    (s>a &&s>d)?printf(s):printf(d);
    return 0;
}