#include "queue.h"
#include <stdio.h>

int main()
{
  Queue q;
  QueueNew(&q, sizeof(int));
  int a = 2;
  int b = 3;
  int c = 4;

  QueueEnter(&q, &a);
  QueueEnter(&q, &b);
  QueueEnter(&q, &c);

  int d, e, f;
  QueueDelete(&q, &d);
  printf("%d\n", d);

  QueueDelete(&q, &e);
  printf("%d\n", e);

  QueueDelete(&q, &f);
  printf("%d\n", f);
  
  QueueFree(&q);
}
