// Right Angled Triangle pattern
/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // ROW
    for (i = 1; i <= n; i++)
    {
        // COLUMN (*)
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}