#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d",&a, &b);
    c= a*(b%10);
    d=a*(b/10%10);
    e=a*(b/100);
    
    f=c+10*d+100*e;
    
    printf("%d\n", c); 
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d", f);

    return 0;
}