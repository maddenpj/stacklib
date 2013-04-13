#include "stack.h"
#include <stdlib.h>
#include <string.h>


void StackNew(Stack* s, int elem_size)
{
  s->elem_size = elem_size;
  s->log_length = 0;
  s->actual_length = 8 * elem_size;
  s->buf = (char*) malloc(s->actual_length);
}

void StackPush(Stack* s, void* elem)
{
  if(s->log_length + s->elem_size >= s->actual_length) {
    s->buf = realloc(s->buf, s->actual_length * 2);
    s->actual_length *= 2;
  }

  memcpy(s->buf + s->log_length, elem, s->elem_size);
  s->log_length += s->elem_size;
}

void StackPop(Stack *s, void* dest)
{
  if(s->log_length == 0) return;

  s->log_length -= s->elem_size;
  memcpy(dest, s->buf+s->log_length, s->elem_size);
}

void StackFree(Stack* s)
{
  free(s->buf);
}
