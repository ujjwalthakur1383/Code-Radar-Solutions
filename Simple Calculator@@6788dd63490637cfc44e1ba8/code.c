#include<stdio.h>
int main(){
    int a,b;
    char c;
    
    scanf("%d %d ",&a ,&b);
    scanf("%c",&c);
    if(c=='+'){
        printf("%d", a+b);
    }
    else if (c=='-'){
        printf("%d",a-b);
    }
    else if (c=='*'){
        printf("%d",a*b);
    }
    
    else if (c=='/'){
        double Quotient =a/b;
        printf("%d",a/b,Quotient);
    }

    return 0;
}