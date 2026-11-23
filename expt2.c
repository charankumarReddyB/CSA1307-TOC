#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;
    printf("Enter the string: ");
    scanf("%s", str);
    len = strlen(str);
    // Check whether the string starts with 0 and ends with 1
    if (len > 0 && str[0] == '0' && str[len - 1] == '1')
    {
        // Check whether all characters are 0 or 1
        for (i = 0; i < len; i++)
        {
            if (str[i] != '0' && str[i] != '1')
            {
                printf("Invalid input! Only 0 and 1 are allowed.\n");
                return 0;
            }
        }

        printf("String Accepted.\n");
    }
    else
    {
        printf("String Rejected.\n");
    }
    return 0;
}