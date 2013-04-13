#include "stack.h"
#include <stdio.h>


void p_mem(Stack* s)
{
  printf("Stack allocated memory: %d\n", s->actual_length);
}

int main()
{
  Stack s;
  StackNew(&s, sizeof(int));

  p_mem(&s);

  printf("Pushing 1000000 ints\n");
  int i;
  for(i = 0; i < 1000000; i++) {
    StackPush(&s, &i);
  }
  p_mem(&s);

  printf("Popping and printing (selectively)\n");
  for(i = 0; i < 1000000; i++) {
    int out;
    StackPop(&s, &out);
    if(i % 100000 == 99999) {
      printf("%d\n", out);
    }
  }

  StackFree(&s);
}
