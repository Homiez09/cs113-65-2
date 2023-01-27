#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

int main()
{
    float radius = 1.5;
    
    printf("The volume of this sphere is %.2f", (4.0/3.0)*PI*radius*radius*radius);
    return 0;
}