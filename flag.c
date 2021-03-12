#include <stdlib.h>
#include <stdio.h>

#define MAX 5

int main()
{
    char rawFlag[MAX];
    int actualFlag;

    printf("FLAG:");

    fgets(rawFlag, MAX, stdin);

    actualFlag = atoi(rawFlag);

    if (actualFlag > 521)
    {
        printf("SUCCESS");
        return 0;
    }
    else
    {
        printf("INVALID FLAG");
        return 1;
    }
}