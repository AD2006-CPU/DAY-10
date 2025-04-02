#include <stdio.h>
void reverseArray(int arr[], int size) 
{
    int start = 0, end = size - 1, temp;
    while (start < end) {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
    }
}
int main() 
{
    int arr[] = {123, 456, 789, 102};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) 
	{
    printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

