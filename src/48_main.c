#include <stdio.h>
#include <string.h>
#include "../include/48_myfile.h"

int main()
{
    char s1[50], s2[50];
    scanf("%s %s", s1, s2);

    int n = sgs_clib_strcspn(s1, s2);

    printf("%d", n);
}