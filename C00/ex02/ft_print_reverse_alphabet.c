#include <unistd.h>

void    ft_print_reverse_alphabet() {
    char z = 'z';
    while(z >= 'a') {
        write(1,&z,1);
        z--;
    }
}

/*
int main()  {
    ft_print_reverse_alphabet();
    return 0;
}
*/