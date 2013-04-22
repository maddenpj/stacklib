#include "queue.h"
#include <stdlib.h>
#include <string.h>


void QueueNew(Queue* q, int elem_size)
{
  q->elem_size = elem_size;
  q->log_length = 0;
  q->index = 0;
  q->actual_length = 8 * elem_size;
  q->buf = (char*) malloc(q->actual_length);
}

void QueueEnter(Queue* q, void* elem)
{
  if(q->log_length + q->elem_size >= q->actual_length) {
    q->buf = realloc(q->buf, q->actual_length * 2);
    q->actual_length *= 2;
  }

  memcpy(q->buf + q->log_length, elem, q->elem_size);
  q->log_length += q->elem_size;
}

void QueueDelete(Queue *q, void* dest)
{
  if(q->log_length == 0) return;

  memcpy(dest, q->buf+q->index, q->elem_size);
  q->index += q->elem_size;
}

void QueueFree(Queue* q)
{
  free(q->buf);
}
