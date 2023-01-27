#include <stdio.h>

int cubeByValue(int n) {
    n = n * n * n;
    return n;
}

int cubeByReference(int* np) {
    *np = *np * *np * *np;
    return *np;
}

int main(void) {
    int i = 21;
    int* iPtr, jPtr;
    iPtr = &i; // pointer เก็บ address ของตัวแกปรอื่น

    printf("i = %d\n", i); // value of 1
    printf("&i = %p\n", &i); // address of 1
    printf("iPtr = %p\n", iPtr);

    int numbers[5] = {100, 200, 300, 400, 500};
    printf("numbers[0] = %d\n", numbers[0]); // value 
    printf("&numbers[0] =%p\n", &numbers[0]); // address
    
    printf("numbers = %p\n", numbers); // address of index 0

    printf("numbers + 1 = %p\n", numbers + 1); // value of index 0

    iPtr = numbers;
    printf("iPtr = %p\n", iPtr); // address
    printf("*iPtr = %d\n", *iPtr); // dereference
    printf("*(iPtr + 1) = %d\n", *(iPtr+1));

    int n = 10;
    printf("cubeByValue(10) = %d\n", cubeByValue(n));
    printf("n = %d\n", n);
    
    int np = 30;
    printf("cubeByReference(&np) = %d\n", cubeByReference(&np));
    printf("np = %d\n", np);
}