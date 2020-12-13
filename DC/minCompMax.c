/**
 * @author [SBAIHIA Nassim]
 * @email [nassim.sbaihia@mail.com]
 * 
 * @desc [description]
 * Problem statement: given an array, find the maximum element with the minimum nimber of comparaisons
 * Solution: using DC
 */


#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MMAX(a, b, c) MAX(MAX((a), (b)), (c))

int minCmpMax(int *arr, int l, int h)
{
    if(l == h)
        return arr[l];
    
    unsigned int mid = (l+h)/2;
    return MAX(
        minCmpMax(arr, l, mid),
        minCmpMax(arr, mid+1, h)
    );
}

int main()
{
    int data[] = {1, -3, 2, 5, -7, 4, 3};

    printf("max subarray sum is: %d\n", minCmpMax(data, 0, 6));

}