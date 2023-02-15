#include <stdio.h>

struct coord {
    int x, y;
} first, second, third, forth;

typedef struct{
    struct coord topleft, bottomright;
} Rectangle;

typedef struct coord Coordinate;

int main(void) {
    int x1, y1; // (x1, y1)
    int x2, y2; // (x2, y2)
    int x3, y3; // (x3, y3)

    //struct coord first, second, third; // สามารถประกาศได้หลายแบบ
    first.x = 50;
    first.y = 50;
    second.x = 100;
    second.y = 100;
    third.x = first.x + 10;
    third.y = first.y + 10;

    scanf("%d %d", &forth.x, &forth.y);

    printf("First = %d %d\n", first.x, first.y);
    printf("Second = %d %d\n", second.x, second.y);
    printf("Third = %d %d\n", third.x, third.y);
    printf("Forth = %d %d\n", forth.x, forth.y);

    struct coord five = second;
    printf("Five = %d %d\n", five.x, five.y);

    int length, width;
    long area;

    Rectangle my_box;
    my_box.topleft.x = 10;
    my_box.topleft.y = 10;
    my_box.bottomright.x = 100;
    my_box.bottomright.y = 50;

    width = my_box.bottomright.x - my_box.topleft.x;
    length = my_box.bottomright.y - my_box.topleft.y;
    area = width * length;
    printf("Area = %ld\n", area);

    return 0;
}