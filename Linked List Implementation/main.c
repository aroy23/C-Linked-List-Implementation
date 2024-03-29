#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int val;
    struct Node* next;
    struct Node* prev;
};
struct Node* head = NULL;
struct Node* tail = NULL;

struct Node* createLinkedList(int x);

int main(void)
{
    bool first = true;
    int linkedListElements = 3; // Input how many desired linked list elements
    for(struct Node* p = createLinkedList(linkedListElements); p != NULL; p = p->next)
    {
        if(first)
        {
            printf("Linked List: ");
            first = false;
        }
        if(p->next == NULL)
        {
            printf("%d", p->val);
            continue;
        }
        printf("%d ", p->val);
    }
    printf("\n");
    
    for(struct Node* p = head; p!= NULL;)
    {
        struct Node* temp = p;
        p = p->next;
        printf("Freeing Value: %d\n", temp->val);
        free(temp);
    }
}

struct Node* createLinkedList(int n) // Creates a linked lists of n elements with integer values in ascending order starting from 1
{
    if(n <= 0)
    {
        printf("No elements or invalid number of elements\n");
    }
    else if(n == 1)
    {
        head = (struct Node*) malloc(sizeof(struct Node));
        tail = head;
        int val;
        printf("Enter Value for Element 1: ");
        scanf("%d", &val);
        head->val = val;
        head->prev = NULL;
        head->next = NULL;
    }
    else
    {
        head = (struct Node*) malloc(sizeof(struct Node));
        int val;
        printf("Enter Value for Element 1: ");
        scanf("%d", &val);
        head->val = val;
        head -> prev = NULL;
        int i = 0;
        for(struct Node* p = head; i < n-1; p = p->next)
        {
            p->next = (struct Node*) malloc(sizeof(struct Node));
            int val;
            printf("Enter Value for Element %d: ", i+2);
            scanf("%d", &val);
            p->next->val = val;
            p->next->prev = p;
            if(i == n-2)
            {
                tail = p->next;
                tail->next = NULL;
                tail->prev = p->next->prev;
            }
            i++;
        }
    }
    return head;
}

