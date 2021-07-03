/**
*
*
*       Implements quick sort
*
*/

#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"
#include "benchmark.h"

#define ARRSIZE 100


int main(int argc, const char** argv)
{
    long double d = benchmark(sort);

    printf("%Lf\n", d);
    return 0;
}

void sort(long* arr, unsigned long size)
{
    long pivot, *less, *more, lsize = 0, msize = 0;

    if (size <= 1) return;

    pivot = arr[0];

    less = (long*) calloc(size, sizeof(long));
    more = (long*) calloc(size, sizeof(long));

    for (unsigned long i = 1; i < size; i++)
    {
        if (arr[i] < pivot)
        {
            less[lsize++] = arr[i];
        }
        else if (arr[i])
        {
            more[msize++] = arr[i];
        }
    }


    sort(more, msize);
    sort(less, lsize);

    for (unsigned int i = 0; i < size; i++)
    {
        if (i < lsize)
        {
            arr[i] = less[i];
        }
        else if (i == lsize)
        {
            arr[i] = pivot;
        }
        else
        {
            arr[i] = more[i-lsize-1];
        }
    }

    free(more);
    free(less);

    return;
}


static void printarr(long* arr, unsigned long size)
{
    fprintarr(stdout, arr, size);
    return;
}

static void fprintarr(FILE* f, long* arr, unsigned long size)
{
    for (unsigned long i = 0; i < size; i++)
    {
        fprintf(f, "%li\n", arr[i]);
    }

    return;
}
