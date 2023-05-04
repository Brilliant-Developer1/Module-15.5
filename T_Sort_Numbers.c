#include <stdio.h>
#include <string.h>
int main()
{
    int array[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }

    int array2[3];

    for (int i = 0; i < 3; i++)
    {
        array2[i] = array[i];
    }

    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = i + 1; j < 3; j++)
        { // Ascending / Descendng = array[i] < array[j]
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", array2[i]);
    }

    return 0;
}
