#include "stack.h"
#include <stdio.h>

typedef struct {
  int age;
  char* name;
  double dick_size;
} Person;

void print_person(Person* p) {
  printf("%s\nAge: %d\nDick Size: %f\n\n", p->name, p->age, p->dick_size);
}

int main()
{
  Person patrick, faiz, felicia_day;
  patrick.age = 23; patrick.name = "Patrick Madden"; patrick.dick_size = 1.4;
  faiz.age = 23; faiz.name = "Faiz Khan"; faiz.dick_size = 1.40001;
  felicia_day.age = 28; felicia_day.name = "Felicia Day (Hottie)"; felicia_day.dick_size = 0.0;

  Stack s;
  StackNew(&s, sizeof(Person));

  StackPush(&s, &patrick);
  StackPush(&s, &faiz);
  StackPush(&s, &felicia_day);

  Person who, am, i;

  StackPop(&s, &who);
  print_person(&who);

  StackPop(&s, &am);
  print_person(&am);

  StackPop(&s, &i);
  print_person(&i);

  StackFree(&s);
}
