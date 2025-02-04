#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int coeff;
    int power;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int coeff, int power) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
struct Node* insert(struct Node* head, int coeff, int power) {
    struct Node* temp = head;
    struct Node* newNode = createNode(coeff, power);

    if (temp == NULL) {
        return newNode;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to display the polynomial
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->power);
        temp = temp->next;
        if (temp != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    struct Node* temp1 = poly1;
    struct Node* temp2 = poly2;
    struct Node* tempResult = NULL;

    while (temp1 != NULL && temp2 != NULL) {
        struct Node* newNode = NULL;
        if (temp1->power > temp2->power) {
            newNode = createNode(temp1->coeff, temp1->power);
            temp1 = temp1->next;
        } else if (temp1->power < temp2->power) {
            newNode = createNode(temp2->coeff, temp2->power);
            temp2 = temp2->next;
        } else {
            newNode = createNode(temp1->coeff + temp2->coeff, temp1->power);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if (result == NULL) {
            result = newNode;
            tempResult = result;
        } else {
            tempResult->next = newNode;
            tempResult = tempResult->next;
        }
    }

    while (temp1 != NULL) {
        struct Node* newNode = createNode(temp1->coeff, temp1->power);
        if (result == NULL) {
            result = newNode;
            tempResult = result;
        } else {
            tempResult->next = newNode;
            tempResult = tempResult->next;
        }
        temp1 = temp1->next;
    }

    while (temp2 != NULL) {
        struct Node* newNode = createNode(temp2->coeff, temp2->power);
        if (result == NULL) {
            result = newNode;
            tempResult = result;
        } else {
            tempResult->next = newNode;
            tempResult = tempResult->next;
        }
        temp2 = temp2->next;
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;

    // Create polynomial 1: 3x^2 + 4x^1 + 5x^0
    poly1 = insert(poly1, 3, 2);
    poly1 = insert(poly1, 4, 1);
    poly1 = insert(poly1, 5, 0);

    // Create polynomial 2: 2x^3 + 7x^2 + 2x^1 + 9x^0
    poly2 = insert(poly2, 2, 3);
    poly2 = insert(poly2, 7, 2);
    poly2 = insert(poly2, 2, 1);
    poly2 = insert(poly2, 9, 0);

    printf("Polynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    struct Node* sum = addPolynomials(poly1, poly2);
    printf("Sum of Polynomials: ");
    display(sum);

    return 0;
}
