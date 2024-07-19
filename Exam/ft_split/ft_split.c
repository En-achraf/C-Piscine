#include <stdlib.h>
#include <stdio.h>

char **split(char *str)
{
    int i = 0;
    int k = 0;
    int j;
    char **arr;

    arr = malloc(2048);
    if (!(arr = malloc(2048)))
        return (NULL);
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        i++;
    while (str[i])
    {
        j = 0;
        if (!(arr[k] = malloc(4096)))
            return (NULL);
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            arr[k][j++] = str[i++];
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        arr[k][j] = '\0';
        k++;
    }
    arr[k] = NULL;
    return (arr);
}

int main() {
    char str[] = "This is a test string with\tmultiple whitespace\ncharacters";
    char **result = split(str);
    int i = 0;

    if (result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    while (result[i]) {
        printf("Token %d: %s\n", i, result[i]);
        free(result[i]);  // Free each token
        i++;
    }
    free(result);  // Free the array of tokens

    return 0;
}