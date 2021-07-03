/**
*
*   Performs the benchmark of the given function
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "benchmark.h"

static void create_arr(long *arr, unsigned long size)
{
    for (unsigned long i = 0; i < size; i++)
    {
        arr[i] = rand() % 200;
    }
    return;
}


long double benchmark(void (*tested) (long*, unsigned long))
{
    unsigned long counter = 0, size = 1000000;
    long* arr;
    clock_t start = clock(), end;

    arr = (long*) calloc(size, sizeof(long));

    for (; counter < 1; counter++)
    {
        create_arr(arr, size);
        tested(arr, size);
    }

    end = clock();

    free(arr);

    return (double) ((end - start) / CLOCKS_PER_SEC);

}
