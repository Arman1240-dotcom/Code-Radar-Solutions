#include <stdio.h>


int main() {
    int a,s,d;
    float avg;
    scanf("%d %d %d",&a,&s,&d);
    avg=(a+s+d)/3;
    printf("Average: %.2f",avg);
    return 0;
}