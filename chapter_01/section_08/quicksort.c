/**
*
*
*       Implements quick sort
*
*/

#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

#define ARRSIZE 10

static void printarr(long* arr, unsigned long size)
{
    for (unsigned long i = 0; i < size; i++)
    {
        printf("%li, ", arr[i]);
    }

    return;
}


int main(void)
{
    long arr[10] = {0};

    create_arr(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%li\n", arr[i]);
    }

    sort(arr, 10);

    return 0;

}

void sort(long* arr, unsigned long size)
{
    long pivot, *less, *more, lsize = 0, msize = 0;

    if (size == 1) return;

    pivot = arr[0];

    printf("%li\n", pivot);

    less = calloc(size, sizeof(long));
    more = calloc(size, sizeof(long));

    for (unsigned long i = 0; i < size; i++)
    {
        if (arr[i] < pivot)
        {
            less[lsize++] = arr[i];
        }
        else
        {
            more[msize++] = arr[i];
        }
    }

    // printf("%li\n", lsize);
    // printf("%li\n", msize);

    sort(more, msize);
    sort(less, lsize);


    for (unsigned int i = 0; i < size; i++)
    {
        if (i < lsize) arr[i] = less[i];
        else arr[i] = more[i-lsize];
    }

    free(more);
    free(less);


    return;
}


void create_arr(long *arr, unsigned long size)
{
    for (unsigned long i = 0; i < size; i++)
    {
        arr[i] = rand() % 200;
    }
    return;
}
