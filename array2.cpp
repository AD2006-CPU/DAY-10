#include <stdio.h>
void findMinMax(int arr[], int size, int *min, int *max) 
{
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
    if (arr[i] > *max) *max = arr[i];
    if (arr[i] < *min) *min = arr[i];
    }
}
int main() 
{
    int arr[] = {7, 2, 12, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    findMinMax(arr, size, &min, &max);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
	return 0;
}

