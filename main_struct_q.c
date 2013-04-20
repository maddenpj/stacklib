#include "queue.h"
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
  Person patrick, faiz, olivia_wilde;
  patrick.age = 23; patrick.name = "Patrick Madden"; patrick.dick_size = 1.4;
  faiz.age = 23; faiz.name = "Faiz Khan"; faiz.dick_size = 1.40001;
  olivia_wilde.age = 29; olivia_wilde.name = "Olivia Wilde (Hottie)"; olivia_wilde.dick_size = 0.0;

  Queue q;
  QueueNew(&q, sizeof(Person));

  QueueEnter(&q, &patrick);
  QueueEnter(&q, &faiz);
  QueueEnter(&q, &olivia_wilde);

  Person who, am, i;

  QueueDelete(&q, &who);
  print_person(&who);

  QueueDelete(&q, &am);
  print_person(&am);

  QueueDelete(&q, &i);
  print_person(&i);

  QueueFree(&q);
}
