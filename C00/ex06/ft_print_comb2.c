#include <unistd.h>

void ft_putchar(char c) {
    write(1,&c,1);
}

void    ft_print_comb2(void) {
    int m, h;
    
    h = 0;
    while (h <= 98) {
        m = h + 1;
        while (m <= 99){
            ft_putchar((h/10)+48);
            ft_putchar((h%10)+48);
            write(1," ",1);
            ft_putchar((m/10)+48);
            ft_putchar((m%10)+48);
            if (h != 98)
                write(1,", ",2);
            m++;
        }
        h++;
    }
}

/*
int main(void) {
    ft_print_comb2();
    return 0;
}
*/
