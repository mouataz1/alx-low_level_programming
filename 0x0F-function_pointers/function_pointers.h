#ifndef FUNC_H
#define FUNC_H

/**
 * @brief Header file for function pointers
 */

#include <stdlib.h>

/**
 * @brief Prints a name using a given function pointer.
 * 
 * @param name A pointer to a character array representing the name.
 * @param f A function pointer that takes a char pointer and returns void.
 */
void print_name(char *name, void (*f)(char *));

/**
 * @brief Iterates over an integer array and applies a given action function to each element.
 * 
 * @param array A pointer to the integer array.
 * @param size The size of the integer array.
 * @param action A function pointer that takes an integer and returns void.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * @brief Searches for an integer in an array using a given comparison function.
 * 
 * @param array A pointer to the integer array.
 * @param size The size of the integer array.
 * @param cmp A function pointer that takes an integer and returns an integer.
 * @return The index of the first element in the array for which the cmp function returns a non-zero value. 
 * If no such element is found, the function returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif

