#include <stdio.h>

/**
 * allocate string on the heap memory
 */
char *allocate_string(const char *str);

/**
 * allocate memory in heap an fill with chars
 * arguments: size_mb - memory to allocated in megabytes
 */
void *fill_up_memory(const size_t size_mb);
