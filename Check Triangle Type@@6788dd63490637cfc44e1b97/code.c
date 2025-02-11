#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d ",&a ,&b,&c);
    if (a==b==c){
        printf("Equilateral");
    }
    else if(a==b!=c)||(b==c!=a){
        printf("Isosceles");
    }
    else(a!=b!=c){
        printf("Scalene");
    }
    return 0;
}