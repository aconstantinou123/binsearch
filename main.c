#include<stdio.h>

int binsearch(int, int [], int);

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result1 = binsearch(9, arr, 10);
    int result2 = binsearch(3, arr, 10);
    int result3 = binsearch(10, arr, 10);
    printf("Result %d\n", result1);
    printf("Result %d\n", result2);
    printf("Result %d\n", result3);
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;     
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else 
            return mid;
    }
    return - 1;
}