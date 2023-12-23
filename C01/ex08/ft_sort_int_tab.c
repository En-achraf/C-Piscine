//#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size) {
    int tmp;
    int i;

    while (size >= 0) {
		i = 0;
		while (i < size - 1) {
			if (tab[i] > tab[i + 1]) {
				tmp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}


int main(void) {
    int tab[] = {9,8,5,7};
    int size = 4;

	printf("before : %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]); 
	ft_sort_int_tab(tab, size);
	printf("after : %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]); 
	return 0;
}
