#include <stdio.h>

int main() {
	int H,M;
 
    scanf("%d %d", &H, &M);
    

    
    if(M >= 45){
        M -= 45;
        printf("%d %d", H,M);
    }
    
    else {
        
        if(H > 0){
            H -= 1;
        }
        
        else{
            H = 23;
        }
        
        M += 15;
        printf("%d %d", H,M);
}
	return 0;
}