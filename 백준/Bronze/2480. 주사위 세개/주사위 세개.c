#include <stdio.h>

int main()
{
    int a, b, c;
    int money;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == b && b == c && c == a){
        money = 10000 + (a * 1000);
        printf("%d\n", money);
    }
    else if(a == b){
        money = 1000 + (a * 100);
        printf("%d\n", money);
    }
    else if(b == c){
        money = 1000 + (b * 100);
        printf("%d\n", money);
    }
    else if(c == a){
        money = 1000 + (c * 100);
        printf("%d\n", money);
    }
    else if(a > b && a > c){
    money = a * 100;
    printf("%d\n", money);
    }
    else if(b > a && b > c){
    money = b * 100;
    printf("%d\n", money);
    }    
    else if(c > b && c > a){
    money = c * 100;
    printf("%d\n", money);
    }
}