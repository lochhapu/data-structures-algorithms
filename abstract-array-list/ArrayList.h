#include <iostream>
#include <stdlib.h>

template <typename T>
class ArrayList
{
private:

    T *array;
    int size;
    
    // Check whether index is valid
    void checkIndex(int index);

    // Shift element to left of array
    void shiftToLeft(int index);

    // Shift element to right of array
    void shiftToRight(int index);

public:

    // Default constructor
    ArrayList();

    // Destructor
    ~ArrayList();

    // Add element to end of list
    void pushEnd(T value);

    // Remove element from end of list
    void popEnd();

    // Insert element at given index
    void insertAt(int index, T value);

    // Remove element at given index
    void removeAt(int index);

    // Replace element at given index
    void set(int index, T value);

    // Return size of list
    int getSize();

    // Print list elements
    void print();

    // Print list with indexes
    void printWithIndex();
};

// Constructor
template <typename T>
ArrayList<T>::ArrayList()
{
    size = 0;
}

// Destructor
template <typename T>
ArrayList<T>::~ArrayList()
{
    free(array);
}

// Add element to end of list
template <typename T>
void ArrayList<T>::pushEnd(T value)
{
    if (size == 0)
    {
        array = (T *) malloc(sizeof(T));
        if (array == NULL)
        {
            exit(EXIT_FAILURE);
        }
        array[0] = value;
        size++;
    }
    else
    {
        size++;
        array = (T *) realloc(array, size * sizeof(T));
        if (array == NULL)
        {
            exit(EXIT_FAILURE);
        }
        array[size - 1] = value;
    }
}

// Print list with indexes
template <typename T>
void ArrayList<T>::printWithIndex()
{    
    if (size == 0)
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    int i;
    for (i = 0; i < (size - 1); i++)
    {
        std::cout << i << ":" << array[i] << ", ";
    }
    std::cout << i << ":" << array[i] << "]\n";
}

// Print list elements
template <typename T>
void ArrayList<T>::print()
{
    if (size == 0)
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    int i;
    for (i = 0; i < (size - 1); i++)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << array[i] << "]\n";
}

// Check whether index is valid
template <typename T>
void ArrayList<T>::checkIndex(int index)
{
    if (index < 0 || index >= size)
    {
        std::cout << "DENIED: invalid index given.\n";
        exit(EXIT_FAILURE);
    }
}

// Return size of list
template <typename T>
int ArrayList<T>::getSize()
{
    return size;
}

// Removes element from end of list
template <typename T>
void ArrayList<T>::popEnd()
{
    if (size > 0) 
    {
        size--;
        array = (T *) realloc(array, sizeof(T) * size);
    }
}

// Replace element at given index
template <typename T>
void ArrayList<T>::set(int index, T value)
{
    checkIndex(index);
    array[index] = value;
}


// Shift element to left of array
template <typename T>
void ArrayList<T>::shiftToLeft(int index)
{
    checkIndex(index);

    if (index == 0)
    {
        std::cout << "DENIED: shift called on first element -- results in out of bound memory access.\n";
        exit(EXIT_FAILURE);
    }
    T value = array[index];
    array[index - 1] =  value;
}

// Removes element at given index
template <typename T>
void ArrayList<T>::removeAt(int index)
{
    checkIndex(index);

    // If its the last element, just reallocate list
    if (index == (size - 1))
    {
        size--;
        array = (T *) realloc(array, sizeof(T) * size);
        if (array == NULL)
        {
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        for (int i = index + 1; i <= (size - 1); i++)
        {
            shiftToLeft(i);
        } 
        size--;
    }
}

// Insert element at given index
template <typename T>
void ArrayList<T>::insertAt(int index, T value)
{
    checkIndex(index);

    array = (T *) realloc(array, (size + 1) * sizeof(T));
    if (array == NULL)
    {
        exit(EXIT_FAILURE);
    }
    size++;
    for (int i = size - 2; i >= index; i--)
    {
        shiftToRight(i);
    }
    array[index] = value;
}

// Shift element to right of array
template <typename T>
void ArrayList<T>::shiftToRight(int index)
{
    checkIndex(index);

    if (index == size - 1)
    {
        std::cout << "DENIED: shift called on last element -- results in out of bound memory access.\n";
        exit(EXIT_FAILURE);
    }
    T value = array[index];
    array[index + 1] = value;
}