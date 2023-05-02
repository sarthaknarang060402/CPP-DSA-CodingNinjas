#include <bits/stdc++.h>
void swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;

    *b = temp;
}
void heapify(int arr[], int N, int i)
{
    // Find largest among root, left child and right child

    // Initialize largest as root
    int smallest = i;

    // left = 2*i + 1
    int left = 2 * i + 1;

    // right = 2*i + 2
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < N && arr[left] < arr[smallest])

        smallest = left;

    // If right child is larger than largest
    // so far
    if (right < N && arr[right] < arr[smallest])

        smallest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (smallest != i)
    {

        swap(&arr[i], &arr[smallest]);

        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, smallest);
    }
}

// Main function to do heap sort
void heapSort(int arr[], int N)
{

    // Build min heap
    for (int i = N / 2 - 1; i >= 0; i--)

        heapify(arr, N, i);

    // Heap sort
    for (int i = N - 1; i >= 0; i--)
    {

        swap(&arr[0], &arr[i]);

        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}