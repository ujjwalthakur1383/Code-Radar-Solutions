#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d ",&a ,&b);
    scanf("%c",&c);
    if(c=='+'){
        printf(a+b);
    }
    return 0;
}