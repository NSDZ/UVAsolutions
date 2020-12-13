/**
 * @author [SBAIHIA Nassim]
 * @email [nassim.sbaihia@mail.com]
 * 
 * @desc [description]
 * Problem statement: given an array, find the minimum and maximum elements using DC technique
 * Solution: using DC
 */


#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

typedef struct
{
    int min, max;
} minMax;

minMax getMinMax(minMax a, minMax b)
{
    return (minMax){
        MIN(a.min, b.min),
        MAX(a.max, b.max)};
}

minMax minMaxArray(int *arr, int l, int h)
{
    if (l == h)
    {
        minMax mm = {arr[l], arr[h]};
        return mm;
    }

    unsigned int mid = (l + h) / 2;

    return getMinMax(
        minMaxArray(arr, l, mid),
        minMaxArray(arr, mid + 1, h)
        );
}

int main()
{
    int data[] = {1, -3, 2, 5, -7, 4, 3};
    minMax result = minMaxArray(data, 0, 6);

    printf("max is: %d\nmin is: %d\n", result.max, result.min);
}