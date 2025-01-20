#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Definition for singly-linked list node
struct ListNode {
    int val;
    struct ListNode* next;
};

// Your cycle detection function
bool hasCycle(struct ListNode* head) {
    struct ListNode* current = head;

    while (current != NULL) { // Outer loop: Traverse all nodes
        struct ListNode* check = current->next;

        while (check != NULL) { // Inner loop: Compare with subsequent nodes
            if (current == check) { // Check if current and check are the same node
                return true; // Cycle detected
            }
            check = check->next; // Move the check pointer forward
        }
        current = current->next; // Move the current pointer forward
    }

    return false; // No cycle found
}

// Helper function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Main function
int main() {
    int n, cyclePos = -1;

    // Ask the user for the number of nodes in the list
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("List cannot be empty.\n");
        return 1;
    }

    // Read the values of the nodes from the user
    struct ListNode *head = NULL, *tail = NULL;

    for (int i = 0; i < n; i++) {
        int value;
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        struct ListNode* newNode = createNode(value);

        if (head == NULL) {
            head = newNode;  // First node becomes head
        } else {
            tail->next = newNode;  // Link the new node to the list
        }

        tail = newNode;  // Move tail to the new node
    }

    // Ask if the user wants to create a cycle and at which position
    printf("Enter the position (1 to %d) to create a cycle (0 for no cycle): ", n);
    scanf("%d", &cyclePos);

    if (cyclePos > 0 && cyclePos <= n) {
        struct ListNode* cycleNode = head;
        for (int i = 1; i < cyclePos; i++) {
            cycleNode = cycleNode->next;
        }
        tail->next = cycleNode;  // Create the cycle by linking tail to the cycle node
        printf("Cycle created at position %d.\n", cyclePos);
    } else if (cyclePos != 0) {
        printf("Invalid position. No cycle created.\n");
    }

    // Check if the list has a cycle
    if (hasCycle(head)) {
        printf("Cycle detected\n");
    } else {
        printf("No cycle detected\n");
    }

    // Free the allocated memory (be careful with memory management in cyclic lists)
    struct ListNode* temp;
    while (head != NULL && cyclePos == 0) {  // Avoid infinite loop if cycle exists
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

