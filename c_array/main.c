#include <stdio.h>
#include <stdlib.h>

#define STR_LEN 20


int main()
{
    int array[] = {1, 2, 3};
    int len = sizeof(array) / sizeof(int);
    char* str = (char*)malloc(sizeof(char) * STR_LEN);
    // print array

    for (int i = 0; i < len; ++i) {
        str[i] = '0' + i;
    }
    str[len] = '\0';

    printf("output: %s\n", str);
    return 0;
}
