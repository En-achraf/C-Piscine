#include <unistd.h>

void    ft_print_numbers(void)  {
    int i = '0';
    while(i <= '9') {
        write(1,&i,1);
        i++;
    }
}
/*
int main() {
    ft_print_numbers();
    return 0;
}
*/