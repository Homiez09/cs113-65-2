#include <stdio.h>

double findAverage(char *filename)
{
    FILE *fp;
    int count = 0;
    double sum = 0;
    double score;

    fp = fopen(filename, "r");
    while (fscanf(fp, "%lf", &score) != EOF)
    {
        sum += score;
        count++;
    }
    fclose(fp);
    return sum / count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}