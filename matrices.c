#include <stdio.h>

int main(void)
{
    int di;
    int dj;
    printf("Inserta la dimension de la matriz en i\n");
    scanf("%d", &di);
    printf("Inserta la dimension de la matriz en j\n");
    scanf("%d", &dj);
    int matrix[5][5];

    for (int i = 0; i < di; i++)
    {
        for (int j = 0; j < dj; j++)
        {
            matrix[di][dj] = 0;
            if (di == dj)
            {
                matrix[di][dj] = 1;
            }
        }
    }
    for (int i = 0; i < di; i++)
    {
        for (int j = 0; j < dj; j++)
        {
            printf("%d ", matrix[di][dj]);
        }
        printf("\n");
    }
    return 0;
}