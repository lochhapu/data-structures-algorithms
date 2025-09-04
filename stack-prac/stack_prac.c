#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

int array[SIZE];
int ptr = -1;

void display();
bool is_empty();
bool is_full();
void push(int value);
int pop();
int peek();

int main()
{
    push(11);
    push(22);
    push(33);
    push(44);
    push(55);
    display();
    pop();
    pop();
    pop();
    pop();
    printf("Peeking at: %i\n", peek());
}

void display()
{
    printf("Stack:\t");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i\t", array[i]);
    }
    printf("\n");
}

bool is_full()
{
    if (ptr >= SIZE - 1)
    {
        return true;
    }
    return false;
}

bool is_empty()
{
    if (ptr < 0)
    {
        return true;
    }
    return false;
}

void push(int value)
{
    if (is_full())
    {
        printf("Stack is full! Cannot push more.\n");
    }
    else
    {
        ptr++;
        array[ptr] = value;
    }
}

int pop()
{
    if (is_empty())
    {
        printf("Cannot pop stack! Already empty.\n");
        return -1;
    }
    else
    {
        return array[ptr--];
    }
}

int peek()
{
    if (is_empty())
    {
        printf("Stack is empty! Cannot peek.\n");
        return -1;
    }
    return array[ptr];
}