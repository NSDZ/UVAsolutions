/**
 * @author [SBAIHIA Nassim]
 * @email [nassim.sbaihia@mail.com]
 * 
 * @desc [description]
 * Problem statement: NOT a problem, mergeSort algorithm
 */


#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

void merge(int *arr, int l, int m, int h)
{
    int tmp[h - l + 1];
    int tmp_i, i, j;

    tmp_i = 0;
    i = l;
    j = m + 1;

    while (i <= m && j <= h)
    {
        if (arr[i] < arr[j])
            tmp[tmp_i++] = arr[i++];
        else
            tmp[tmp_i++] = arr[j++];
    }

    while (i <= m)
        tmp[tmp_i++] = arr[i++];

    while (j <= h)
        tmp[tmp_i++] = arr[j++];

    for (i = l; i <= h; i++)
        arr[i] = tmp[i - l];
}

void mergeSort(int *arr, int l, int h)
{
    if (h == l)
        return;

    if (l + 1 == h)
    {
        if (arr[l] < arr[h])
            return;
        int tmp = arr[l];
        arr[l] = arr[h];
        arr[h] = tmp;

        return;
    }

    int mid = (l + h) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, h);

    merge(arr, l, mid, h);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 10, 7, 7, 0, 3, 8};
    //merge(arr, 0, (0+6)/2, 6);

    mergeSort(arr, 0, 6);

    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
