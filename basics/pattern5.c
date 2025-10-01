// Patterns 5

#include <stdio.h>
int main()
{
    int n; // total size
    printf("Enter size: ");
    scanf("%d", &n);
    int i, j;
    char alp = 'A';
    // ROWS
    for (i = 1; i <= n; i++)
    {
        // COLUMNS
        for (j = 1; j <= n; j++)
        {
            printf("%c ", alp);
            alp++;
        }
        printf("\n");
    }
}
/*
1.
n = 5
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

2.
n=5
* * * * *
*       *
*       *
*       *
* * * * *

*/