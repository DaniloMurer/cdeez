#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * allocate string on heap and set it's content
 * */
char *allocate_string(const char *str) {
  // allocate memory equal to strings length on the heap
  char *pointer = (char *)malloc(strlen(str) * sizeof(char));
  // copy strings content to previously allocated heap memory
  strcpy(pointer, str);
  return pointer;
}

void *kill_the_ram() { return malloc(20073741824); }

int main(void) {
  const char *text = "Hello World"; // string stored in special read-only memory
  char another_text[] =
      "another text"; // string stored as array with fixed sized in stack

  // string stored in heap memory
  char *heap_text = allocate_string("another text it is");

  printf("%s\n", heap_text);

  void *killer = kill_the_ram();
  strcpy(killer, "kill");

  while (1) {
    memset(killer, 'd', 20073741824 * sizeof(char));
  }
  // deallocate memory
  free(heap_text);
  // deallocate memory for no real reason here what so ever
  free(killer);
  return 0;
}
