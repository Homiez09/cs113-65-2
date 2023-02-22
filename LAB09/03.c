#include <stdio.h>
#include <math.h>

typedef struct {
    double X, Y;
} Point;

int main() {
    int n;
    printf("Number of Points: ");
    scanf("%d", &n);

    Point points[n];

    for (int i = 0; i < n; i++) {
        printf("P%d.X: ", i + 1);
        scanf("%lf", &points[i].X);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].Y);
    }

    printf("Length:\n");

    for (int i = 0; i < n-1; i++) {
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", i+1, points[i].X, points[i].Y, i+2, points[i+1].X, points[i+1].Y, sqrt(pow(points[i+1].X - points[i].X, 2) + pow(points[i+1].Y - points[i].Y, 2)));
    }

    return 0;
}

