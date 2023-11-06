#include <stdio.h>

int main()
{
    int n = 9; // Size of the pattern (rows and columns)

    // Loop through rows
    for (int i = 0; i < n; i++)
    {
        // Loop through columns
        for (int j = 0; j < n; j++)
        {
            // Calculate the minimum value between indices i, j, n-i-1, and n-j-1
            int value = i < j ? i : j;
            value = value < n - i - 1 ? value : n - i - 1;
            value = value < n - j - 1 ? value : n - j - 1;

            // Print the value followed by a space
            printf("%d ", n - value);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
