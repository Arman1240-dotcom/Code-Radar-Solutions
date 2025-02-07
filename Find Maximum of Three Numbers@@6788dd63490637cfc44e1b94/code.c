#include <stdio.h>



int main() {
    int a,s,d;
    scanf("%d %d %d",a,s,d);
    (a>s && s>d)?printf(a):(s>a &&a>d)?printf(s):printf(d)
    return 0;
}