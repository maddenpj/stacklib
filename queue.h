#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef struct
{
  int elem_size;
  int index;
  int log_length;
  int actual_length;
  char* buf;
} Queue;

void QueueNew(Queue* q, int elem_size);
void QueueFree(Queue* q);
void QueueEnter(Queue* q, void* elem);
void QueueDelete(Queue* q, void* dest);

#endif
