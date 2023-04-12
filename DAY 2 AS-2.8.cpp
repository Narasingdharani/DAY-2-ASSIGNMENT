#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    /* Find frequency of each element */
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }

        if(freq[i]!=0)
        {
            freq[i] = count;
        }
    }

    /* Print frequency of each element */
    printf("\nFrequency of all elements in array: \n");
    for(i=0; i<size; i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

