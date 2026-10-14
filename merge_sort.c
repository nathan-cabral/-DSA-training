#include <stdio.h>

void merge(int numbers[], int temp[], int left, int mid, int right);

void merge_sort(int numbers[], int temp[], int left, int right);

int main()
{
    int numbers[] =  {7, 3, 1, 2};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int temp[n];
    merge_sort(numbers, temp, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",numbers[i]);
    }
    puts("");
}

void merge(int numbers[], int temp[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while  (i <= mid && j <= right)
    {
        if (numbers[i] <= numbers[j])
        {
            temp[k] = numbers[i];
            i++;
        }
        else
        {
            temp[k] = numbers[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k++] = numbers[i++];
    }
    while (j <= right)
    {
        temp[k++] =  numbers[j++];
    }
    for (int p = left; p <= right; p++)
    {
        numbers[p] = temp[p];
    }
}

void merge_sort(int numbers[], int temp[], int left, int right)
{
    if (left >= right)
    {
        return;
    }    
    int mid = left + (right - left) / 2;
    
    merge_sort(numbers, temp, left, mid);
    merge_sort(numbers, temp,  mid + 1, right);

    merge(numbers, temp, left, mid, right);
}
