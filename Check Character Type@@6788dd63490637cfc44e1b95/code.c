#include<stdio.h>
int main(){
    char a;
    int b;
    scanf("%c %d",&a ,&b);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
        printf("Vowel");
    }

    return 0;
}