#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

int queue[SIZE];
int back = -1;

bool is_empty()
{
    if (back == -1)
    {
        return true;
    }
    return false;
}

bool is_full()
{
    if (back >= SIZE - 1)
    {
        return true;
    }
    return false;
}

void enqueue(int value)
{
    if (is_full())
    {
        printf("Cannot enqueue! Queue is full.\n");
    }
    else
    {
        back++;
        queue[back] = value;
    }
}

int dequeue()
{
    if (is_empty())
    {
        printf("Cannot dequeue! Queue is empty.\n");
        return -1;
    }
    else
    {
        int value = queue[0];

        // Shift elements to left
        for (int i = 0; i < back; i++)
        {
            queue[i] = queue[i + 1];
        }
        back--;

        return value;
    }
}

int peek()
{
    if (is_empty())
    {
        printf("Cannot peek! Queue is empty.\n");
        return -1;
    }
    else
    {
        return queue[0];
    }
}

void display()
{
    printf("Queue:\t");
    for (int i = 0; i <= back; i++)
    {
        printf("%i\t", queue[i]);
    }
    printf("\n");
}

int main(void)
{
    dequeue();
    display();
    printf("Peek: %i\n", peek());
}