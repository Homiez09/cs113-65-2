
// ไม่ผ่านจ้าาาาาาาาาาาาาาา










// ยากมากกกกกกกกกก






#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: could not open file\n");
        return;
    }

    // Read data from file and compute stock report
    Product stock[100];
    int nStock = 0;
    char line[100];
    fgets(line, sizeof(line), file); // skip header line
    while (fgets(line, sizeof(line), file)) {
        char name[30];
        int amount;
        double price;
        sscanf(line, "%*[^,],%*[^,],%[^,],%d,%lf", name, &amount, &price);

        // Check if product already exists in stock
        int found = 0;
        for (int i = 0; i < nStock; i++) {
            if (strcmp(stock[i].name, name) == 0) {
                stock[i].amount += amount;
                stock[i].totalCost += amount * price;
                found = 1;
                break;
            }
        }

        // Add new product if not already in stock
        if (!found) {
            Product product = { .amount = amount, .totalCost = amount * price };
            strncpy(product.name, name, sizeof(product.name) - 1);
            stock[nStock] = product;
            nStock++;
        }
    }

    // Print stock report
    printStock(stock, nStock);

    // Close file
    fclose(file);
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
    return 0;
}
