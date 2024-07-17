#include <stdlib.h>

int	ch7al(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*hna;
	int		i;
	int		x;

	x = ch7al(src);
	i = 0;
	hna = malloc(sizeof(char) * x);
	if (hna == NULL)
		return (NULL);
	while (src[i])
	{
		hna[i] = src[i];
		i++;
	}
	hna[i] = '\0';
	return (hna);
}

int len(char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

// Function to check and set substrings based on charset
void check_set(char *str, char *set, char **here) {
    int j = 0;
    int i = 0;
    int x = 0;

    while (set[j]) {
        i = 0; // Reset i for each character in set
        while (str[i]) {
            if (set[j] == str[i]) {
                here[x] = ft_strdup(str); // Copy substring
                x++;
                str += i + 1; // Move str pointer past delimiter
                i = -1; // Reset i to start over with the new substring
            }
            i++;
        }
        j++;
    }
    here[x] = ft_strdup(str); // Add the remaining part of str
    here[x + 1] = NULL;    // Null-terminate the array
}

// Function to split a string based on a charset
char **ft_split(char *str, char *charset) {
    int lenth;
    char **here;

    lenth = len(str);
    here = malloc(sizeof(char *) * (lenth + 1)); // Allocate memory for the array of strings
    if (!here) {
        return NULL; // Check if memory allocation was successful
    }

    check_set(str, charset, here);
    return here;
}
