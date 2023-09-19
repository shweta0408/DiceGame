// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// int main() {
//     struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* node5 = (struct Node*)malloc(sizeof(struct Node));

//     node1->data = 100;
//     node2->data = 200;
//     node3->data = 300;
//     node4->data = 400;
//     node5->data = 500;

//     struct Node* head = node1;
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = node5;
//     node5->next = NULL;

//     struct Node* ptr;
//     if (head == NULL)
//         printf("List is already EMPTY!!");
//     else {
//         ptr = head;
//         head = head->next;
//         free(ptr);
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node5 = (struct Node*)malloc(sizeof(struct Node));

    node1->data = 100;
    node2->data = 200;
    node3->data = 300;
    node4->data = 400;
    node5->data = 500;

    struct Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    struct Node* ptr;
    if (head == NULL)
        printf("List is already EMPTY!!");
    else {
        ptr = head;
        head = head->next;
        free(ptr);
    }

    printf("Modified List: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}







