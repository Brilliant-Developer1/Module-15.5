#include <stdio.h>
#include <stdlib.h>

int my_abs(int input)
{
    int ans = abs(input);
    return ans;
}
int main()
{
    int input;
    scanf("%d", &input);
    int ans = my_abs(input);

    printf("%d", ans);

    return 0;
}