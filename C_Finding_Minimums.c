#include <stdio.h>
#include <limits.h>

// Function to slice an array
void sliceArray(int *originalArray, int start, int end, int *resultArray)
{
    int size = end - start + 1;
    for (int i = 0; i < size; i++)
    {
        resultArray[i] = originalArray[start + i];
    }
}

int main()
{

    int length, group, i;
    scanf("%d %d", &length, &group);
    int arr[length];
    // input array
    for (i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    // group of array
    int perGroupLength = group;
    int lastGroupLength = length % group;
    int extraGroupItem = lastGroupLength == 0 ? 0 : 1;

    int resultLength = perGroupLength + extraGroupItem;

    int resultArr[resultLength];

    int start = 0;

    int loopLength = (length / group) + extraGroupItem;

    for (int k = 1; k <= loopLength; k++)
    {
        int chunkLength = lastGroupLength > 0 && group == k ? lastGroupLength : perGroupLength;
        // printf("chunkLength: %d\n", chunkLength);

        int chunkArr[chunkLength];
        int end = chunkLength + start;
        sliceArray(arr, start, end, chunkArr);
        start += perGroupLength;

        int min = INT_MAX;
        for (int j = 0; j < chunkLength; j++)
        {
            // printf("%d ", chunkArr[j]);

            if (min > chunkArr[j])
            {
                min = chunkArr[j];
            }
        }
        // printf("\n");
        printf("%d ", min);
    }
    return 0;
}