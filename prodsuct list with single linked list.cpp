 .#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a product
struct Product {
    int id;
    char name[50];
    float price;
    struct Product* next;
};

// Function to create a new product node
struct Product* createProduct(int id, char name[], float price) {
    struct Product* newProduct = (struct Product*)malloc(sizeof(struct Product));
    newProduct->id = id;
    strcpy(newProduct->name, name);
    newProduct->price = price;
    newProduct->next = NULL;
    return newProduct;
}

// Function to insert a product at the end of the list
void insertProduct(struct Product** head, int id, char name[], float price) {
    struct Product* newProduct = createProduct(id, name, price);
    
    if (*head == NULL) {
        *head = newProduct;
        return;
    }

    struct Product* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newProduct;
}

// Function to display the product list
void displayProducts(struct Product* head) {
    struct Product* temp = head;
    
    if (temp == NULL) {
        printf("Product list is empty.\n");
        return;
    }

    printf("Product List:\n");
    while (temp != NULL) {
        printf("ID: %d, Name: %s, Price: %.2f\n", temp->id, temp->name, temp->price);
        temp = temp->next;
    }
}

// Function to delete a product by ID
void deleteProduct(struct Product** head, int id) {
    struct Product* temp = *head;
    struct Product* prev = NULL;

    if (temp != NULL && temp->id == id) {
        *head = temp->next;
        free(temp);
        printf("Product with ID %d deleted.\n", id);
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Product with ID %d not found.\n", id);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Product with ID %d deleted.\n", id);
}

int main() {
    struct Product* head = NULL;
    int choice, id;
    char name[50];
    float price;

    do {
        printf("\n1. Add Product\n2. Display Products\n3. Delete Product\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter product ID: ");
                scanf("%d", &id);
                printf("Enter product name: ");
                scanf("%s", name);
                printf("Enter product price: ");
                scanf("%f", &price);
                insertProduct(&head, id, name, price);
                break;
            case 2:
                displayProducts(head);
                break;
            case 3:
                printf("Enter product ID to delete: ");
                scanf("%d", &id);
                deleteProduct(&head, id);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
