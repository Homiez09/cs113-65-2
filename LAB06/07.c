#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
    int num, count, target, i;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];

    // initialize array numbers from 1 to num by numbersPtr
    for (; numbersPtr < &numbers[num]; numbersPtr++)
    {
        *numbersPtr = numbersPtr - &numbers[0] + 1;
    }

    // loop through count
    for (i = 0; i < count; i++)
    {
        scanf("%d", &target);
        removeTarget(&numbers[0], num, target);
    }

    numbersPtr = &numbers[0];

    // print elements in numbers using numberPtr
    for (; numbersPtr < &numbers[num]; numbersPtr++)
    {
        printf("%d ", *numbersPtr);
    }
    puts("");
    return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target)
{
    int i, temp = 0;
    for (i = 0; i < size; i++) {
        (temp || array[i] == target) ? array[i] = array[i+1], temp = 1 : 0;
        if (temp || array[i] == target) {
            array[i] = array[i+1];
            temp = 1;
        }
    }
    if(temp)array[i-1] = 0;
}