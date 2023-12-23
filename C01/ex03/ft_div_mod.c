#include <stdio.h>

void    ft_div_mod(int a,int b,int *div,int *mod) {

    *div = a/b;
    *mod = a%b;
}

int main(void) {
    int div, mod ,a ,b;
    a = 2;
    b = 0;

    ft_div_mod(a, b, &div, &mod);

    printf("the div ruselt : %d and the mod result : %d", div, mod);
    return 0;
}