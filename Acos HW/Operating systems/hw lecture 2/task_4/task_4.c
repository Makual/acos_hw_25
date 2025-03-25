#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

int main() {
    Node *head = NULL, *curr, *prev = NULL;
    int x;

    printf("Enter numbers (end with 0):\n");
    while (scanf("%d", &x), x != 0) {
        curr = malloc(sizeof(Node));
        curr->val = x;
        curr->next = head;
        head = curr;
    }

    while (head) {
        curr = head;
        head = head->next;
        curr->next = prev;
        prev = curr;
    }
    head = prev;

    printf("Reversed list:\n");
    while (head) {
        printf("%d ", head->val);
        curr = head;
        head = head->next;
        free(curr);
    }
    printf("\n");

    return 0;
}
