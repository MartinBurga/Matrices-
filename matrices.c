#include <stdio.h>

int main(void)
{
    int di;
    int dj;
    // Se crean las variables "di" "dj" que estas seran las principales encargadas de realizar la dimension de la matrices
    // Segun el usuario desee.
    printf("Inserta la dimension de la matriz en i\n");
    scanf("%d", &di);
    printf("Inserta la dimension de la matriz en j\n");
    scanf("%d", &dj);
    int matrix[di][dj];
    // Apesar de que salga un error hay que ignorar dicho error que asoma aqui.

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

    // Se va leyendo en orden de lectura de matrices. Con el primer for se lee las filas
    // mientras que el segundo for lee las columnas.
    // EL if se encarga principalmente de escribir 1 en la diagonal princial acorde a que si
    // le numero de filas coincide al numero de columnas

    for (int i = 0; i < di; i++)
    {
        for (int j = 0; j < dj; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Finalmente se escribe la matriz con espacios de filas y entre columnas para una mas facil lectura.
    return 0;
}