#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

void insert_beg(Node **head, int value);
void insert_end(Node **head, int value);
void rem_beg(Node **head);
void rem_end(Node **head);
void rem_value(Node **head, int value);
void print_list(Node *head);
int search_list(Node *head, int value);
void free_list(Node *head);

int main(void)
{
    Node *numbers = NULL; // Always init to null
    insert_end(&numbers, 77);
    insert_end(&numbers, 78);
    insert_end(&numbers, 79);
    insert_end(&numbers, 60);
    print_list(numbers);
    rem_value(&numbers, 79);
    free_list(numbers);
}

// Inserts value to beginning of list
void insert_beg(Node **head, int value)
{
    Node *ptr = malloc(sizeof(Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    ptr->value = value;
    ptr->next = *head;
    *head = ptr;
}

// Prints the full list
void print_list(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->value);
        ptr = ptr->next;
    }
}

// Inserts value to end of list
void insert_end(Node **head, int value)
{
    Node *ptr = malloc(sizeof(Node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    ptr->value = value;
    ptr->next = NULL;

    // If list is empty
    if (*head == NULL)
    {
        *head = ptr;
        return;
    }

    Node *ptr2 = *head;
    while (ptr2->next != NULL)
    {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr;
}

// Frees the list from memory
void free_list(Node *head)
{
    Node *ptr = head;
    Node *tmp = NULL;
    while (ptr != NULL)
    {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

// Searches for value on list
int search_list(Node *head, int value)
{
    Node *ptr = head;
    int index = 0;
    while (ptr != NULL)
    {
        if (ptr->value == value)
        {
            return index;
        }
        ptr = ptr->next;
        index++;
    }
    return -1;
}

// Removes value from beginning
void rem_beg(Node **head)
{
    if (*head == NULL)
    {
        printf("List already empty.\n");
        return;
    }
    Node *ptr = *head;
    *head = ptr->next;
    free(ptr);
}

// Removes value from end of list
void rem_end(Node **head)
{
    // Check if empty list
    if (*head == NULL)
    {
        printf("Cannot remove from empty list.\n");
        return;
    }

    Node *ptr = *head;

    // If just one element
    if (ptr->next == NULL)
    {
        free(ptr);
        *head = NULL;
        return;
    }

    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    free(ptr->next);
    ptr->next = NULL;
}

// Removes value you specified
void rem_value(Node **head, int value)
{

}