#include <stdio.h>

struct Item {
    char itemName[100];
    int quantity;
    float price;
    float amount;
};

void readItem(struct Item *item) {
    printf("Enter item name: ");
    scanf("%s", item->itemName);
    printf("Enter quantity: ");
    scanf("%d", &item->quantity);
    printf("Enter price: ");
    scanf("%f", &item->price);
    item->amount = item->quantity * item->price;
}

int main() {
    struct Item item;

    readItem(&item);

    printf("Item Name: %s\n", item.itemName);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);
    printf("Amount: %.2f\n", item.amount);

    return 0;
}