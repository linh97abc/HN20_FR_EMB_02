#include <stdio.h>

void Swap(int *xp, int *yp);

void SortAscending();

void SortDescending();

void PrintArray(int arr[], int size);

void Swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/* A function to implement sort ascending*/
void SortAscending(int arr[], int n)
{
    int i, j;
	//b2
    for (i = 0; i < n - 1; i++)
    {
        /* Last i elements are already in place */
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

/* A function to implement sort descending*/
void SortDescending(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        /* Last i elements are already in place */
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                Swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

/* Function to print an array */
void PrintArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

/* Driver program to test above functions */
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    SortAscending(arr, n);
    printf("Sorted array: \n");
    PrintArray(arr, n);

    SortDescending(arr, n);
    printf("Sorted array: \n");
    PrintArray(arr, n);
    return 0;
}
