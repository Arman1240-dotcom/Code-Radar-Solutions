// Your code here...
#include<stdio.h>
int main(){
    int a,s,d;
    scanf("%d %d %d",&a,&s,&d);
    if ((a+s>d) && (a+d>s) && (s+d>a)){
        if ((a==s) && (s==d)){
            printf("Equilateral");
        }else if ((a==s) || (a==d) ||(s==d)){
            printf("Isosceles");
        }else{
            printf("Scalene");
        }
    }
}