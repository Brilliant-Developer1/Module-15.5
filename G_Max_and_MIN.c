#include <stdio.h>
#include <limits.h>

void minandmax(int array[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        if (max < array[i])
        {
            max = array[i];
        }
    }
    printf("%d %d", min, max);
}
int main()
{

    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    minandmax(array, n);

    return 0;
}