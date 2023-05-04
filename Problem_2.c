#include <stdio.h>

int my_len(char array[])
{
    int ans = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        ans++;
    }
    return ans;
}
int main()
{
    char array[100];
    scanf("%s", array);

    int ans = my_len(array);

    printf("%d", ans);

    return 0;
}