#include<stdio.h>

int main(){
    int a, b;
    char c;

    // Read input for two integers and an operator
    scanf("%d %d", &a, &b);
    scanf(" %c", &c); // Added space before %c to consume any lingering newline from the previous input

    if(c == '+'){
        printf("%d", a + b);
    }
    else if(c == '-'){
        printf("%d", a - b);
    }
    else if(c == '*'){
        printf("%d", a * b);
    }
    else if(c == '/'){
        if(b != 0) {
            float Quotient = a / b; // Make sure the division is done in double
            printf("%lf", Quotient); 
        }
        else {
            printf("error");
        }
    }

    return 0;
}
