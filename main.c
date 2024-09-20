#include "allocator.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // about 20gb ergo 20,000 mb of ram gonna be allocated and filled
  printf("Filling up memory...\n");
  void *killer = fill_up_memory(0x4F00);

  char dummy_input[25];
  printf("Enter any word to stop the program...\n");
  scanf(" %s", dummy_input);

  printf("You inputed: %s\n", dummy_input);
  //  deallocate memory
  //  free(heap_text);
  //  deallocate memory for no real reason here what so ever
  free(killer);
  return 0;
}
