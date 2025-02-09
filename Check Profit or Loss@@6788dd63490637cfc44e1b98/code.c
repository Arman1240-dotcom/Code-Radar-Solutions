#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,s;
    scanf("%d %d",&a,&s);
    if (s>a){
        printf("Profit");
    }
    else if(s==a){
        printf("No Profit No Loss");
    }else{
        printf("Loss");
    }

    return 0;
}