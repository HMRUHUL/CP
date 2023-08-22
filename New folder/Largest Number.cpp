#include <stdio.h>
#include <string.h>

int main()
{
    unsigned long long int num;
    int k;

    scanf("%llu", &num);

    scanf("%d", &k);

    char numStr[20];  // Max 18 digits + 1 for null terminator
    sprintf(numStr, "%llu", num);  // Convert the number to a string

    int len = strlen(numStr);

    // Delete digits to maximize the number
    int i = 0;
    while (k > 0 && i < len - 1)
    {
        if (numStr[i] < numStr[i + 1])
        {
            for (int j = i; j < len - 1; j++)
            {
                numStr[j] = numStr[j + 1];
            }
            len--;
            k--;
            i = (i > 0) ? i - 1 : 0;
        }
        else
        {
            i++;
        }
    }
    for (int j = 0; j < len - k; j++)
    {
        printf("%c", numStr[j]);
    }

    return 0;
}
