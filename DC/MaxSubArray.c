/**
 * @author [SBAIHIA Nassim]
 * @email [nassim.sbaihia@mail.com]
 * 
 * @desc [description]
 * Problem statement: Given an array of integers, find the contiguous subarray with the largest sum
 * Solution: using DC
 */

#include <stdio.h>
#include <limits.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MMAX(a, b, c) MAX(MAX((a), (b)), (c))

int maxCross(int *arr, int l, int m, int h)
{
    int maxLeft = INT_MIN;
    int maxRight = INT_MIN;
    int sum = 0;

    for (int i = m; i >= l; i--)
    {
        sum += arr[i];
        maxLeft = sum > maxLeft ? sum : maxLeft;
    }

    sum = 0;
    for (int i = m + 1; i <= h; i++)
    {
        sum += arr[i];
        maxRight = sum > maxRight ? sum : maxRight;
    }

    return maxLeft + maxRight;
}

int maxSubArray(int *arr, int l, int h)
{
    if(h == l)
        return arr[l];

    unsigned int mid = (l+h)/2;

    return MMAX(
        maxSubArray(arr, l, mid),
        maxSubArray(arr, mid+1, h),
        maxCross(arr, l, mid, h)
    );
}


int main()
{
    int data[] = {1, -3, 2, 5, -7, 4, 3};

    printf("max subarray sum is: %d\n", maxSubArray(data, 0, 6));

}