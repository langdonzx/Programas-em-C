#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    n = 10;
    
    printf("Digite o valor \n");
	scanf("%d", &n);
    
    while(n = n + 1)
    {
        printf("%d ",n);
        n = n + 1;
    }
}
