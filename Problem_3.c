#include <stdio.h>

int count_odd(int array[], int input)
{
    int count = 0;
    for (int i = 0; i < input; i++)
    {
        if (array[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
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
    int count = count_odd(array, input);
    printf("%d", count);

    return 0;
}