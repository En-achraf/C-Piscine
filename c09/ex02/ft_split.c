#include <stdlib.h>
 int len(char *str) {
    int i;

    i = 0;
    while(str[i]) {
        i++;
    }
 }

char charset(char *set) {
    int i;

    i = 0;
    while(set[i]) {
        i++;
    }
    return set[i];
}

char **ft_split(char *str, char *charset) {
    int i;
    int *here;
    int lenth;

    i = 0;
    lenth = len;
    p = malloc
}