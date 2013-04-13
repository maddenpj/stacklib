#include "stack.h"
#include <stdio.h>

int main()
{
  Stack s;
  StackNew(&s, sizeof(int));
  int a = 2;
  int b = 3;

  StackPush(&s, &a);
  StackPush(&s, &b);

  int c, d;
  StackPop(&s, &c);
  printf("%d\n", c);

  StackPop(&s, &d);
  printf("%d\n", d);

  StackFree(&s);
}
