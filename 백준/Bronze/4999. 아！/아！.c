#include <stdio.h>
#include <string.h>

int main()
{
    char jae[1000], doc[1000];
    
    scanf("%s", jae);
    scanf("%s", doc);
    
    if(strlen(jae) >= strlen(doc))
        printf("go");
    else
        printf("no");

    return 0;
}