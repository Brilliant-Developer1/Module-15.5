#include <stdio.h>

void change_it(int array[], int input)
{
    array[input - 1] = 100;
}
int main()
{
    int input;
    scanf("%d", &input);

    int array[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }
    change_it(array, input);

    for (int i = 0; i < input; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}