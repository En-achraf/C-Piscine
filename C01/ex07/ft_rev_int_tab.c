//#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size) {

    int start;
    int tmp;

    start = 0;
    while(start < size) {
        tmp = tab[start];
        tab[start] = tab[size];
        tab[size] = tmp;
        start++;
        size--;
    }
}

int main(void) {
    int tab[] = {10,20,30,40,50,60};
    int size = 5;

	printf("before : %d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	ft_rev_int_tab(tab, size);
	printf("after : %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}	
