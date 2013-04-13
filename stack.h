#ifndef _STACK_H_
#define _STACK_H_

typedef struct
{
  int elem_size;
  int log_length;
  int actual_length;
  char* buf;
} Stack;

void StackNew(Stack* s, int elem_size);
void StackFree(Stack* s);
void StackPush(Stack* s, void* elem);
void StackPop(Stack* s, void* dest);

#endif
