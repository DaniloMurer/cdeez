#include <math.h>
#include <stdlib.h>
#include <string.h>

struct Text {
  size_t length;
  char *text;
};

typedef struct Text Text;

Text create_test(char *text) {
  Text test = {.length = strlen(text), .text = text};
  return test;
}

char *allocate_string(const char *str) {
  // allocate memory equal to strings length on the heap
  char *pointer = (char *)malloc(strlen(str) * sizeof(char));
  // copy strings content to previously allocated heap memory
  strcpy(pointer, str);
  return pointer;
}

void *fill_up_memory(const size_t size_mb) {
  size_t size_bytes = size_mb * pow(10, 6);
  void *pointer = malloc(size_bytes);
  memset(pointer, 0x44, size_bytes);
  return pointer;
}
