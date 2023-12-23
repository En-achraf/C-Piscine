#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b) {
   
   int div;
   int mod;
    
    div = *a / *b;
    mod = *a % *b;
    *a  = div;
    *b = mod;
}

int main(void) {
    int a; 
    int b;
    a = 0;
    b = 1;

    ft_ultimate_div_mod(&a, &b);

    printf("the div ruselt : %d and the mod result : %d",a, b);
    return 0;
}