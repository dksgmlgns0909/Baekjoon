#include <stdio.h>

int main()
{
    int A,B,C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    
    if(B+C < 60)
        printf("%d %d", A, B+C);
        
    else{   
        int a = (B+C)/60;
        int b = (B+C)%60;
        
        if(A+a < 24)
            printf("%d %d", A+a, b);
        
				else    
            printf("%d %d", A+a-24, b);
    }
}