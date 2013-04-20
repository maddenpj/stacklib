#include "queue.h"
#include <stdio.h>


void p_mem(Queue* q)
{
  printf("Queue allocated memory: %d\n", q->actual_length);
}

int main()
{
  Queue q;
  QueueNew(&q, sizeof(int));

  p_mem(&q);

  printf("Entering 1000000 ints\n");
  int i;
  for(i = 0; i < 1000000; i++) {
    QueueEnter(&q, &i);
  }
  p_mem(&q);

  printf("Deleting and printing (selectively)\n");
  for(i = 0; i < 1000000; i++) {
    int out;
    QueueDelete(&q, &out);
    if(i % 100000 == 0) {
      printf("%d\n", out);
    }
  }

  QueueFree(&q);
}
