#include <stdio.h>

typedef struct {
    int width, height, length;
} Box;

int get_volume(Box b) {
    return b.width * b.height * b.length;
}

int main(void) {
    Box my_box;

    printf("Enter: ");
    scanf("%d %d %d", &my_box.width, &my_box.height, & my_box.length);

    int volume = get_volume(my_box);
    printf("Volume = %d\n", volume);
}