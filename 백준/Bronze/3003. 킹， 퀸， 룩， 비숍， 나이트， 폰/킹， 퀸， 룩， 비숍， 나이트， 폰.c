#include <stdio.h>

int main(){
    
    int c[6]={1, 1, 2, 2, 2, 8}, n;
    for(int i=0; i<6; i++) {
        
        scanf("%d", &n);
        printf("%d ", c[i]-n);
        
    }
    return 0;
}