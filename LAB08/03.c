#include <stdio.h>

struct vector {
    float x, y, z;
};

int main(void) {
    struct vector v, u;

    printf("Enter u: ");
    scanf("%f %f %f", &u.x, &u.y, &u.z);
    printf("Enter v: ");
    scanf("%f %f %f", &v.x, &v.y, &v.z);
    printf("u x v = %.1f %.1f %.1f", u.y * v.z - u.z * v.y, u.z * v.x - u.x * v.z, u.x * v.y - u.y * v.x);
    return 0;
}