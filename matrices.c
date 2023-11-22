#include <stdio.h>

int main(void)
{
    int di;
    int dj;
    printf("Inserta la dimension de la matriz en i\n");
    scanf("%d", &di);
    printf("Inserta la dimension de la matriz en j\n");
    scanf("%d", &dj);
    int matrix[di][dj];

    for (int i = 0; i < di; i++)
    {
        for (int j = 0; j < dj; j++)
        {
            matrix[i][j] = 0;
            if (i == j)
            {
                matrix[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < di; i++)
    {
        for (int j = 0; j < dj; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}