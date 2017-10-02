#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tests.h"
#include "genericLinkedList.h"

void runTests(){
  printf("Tests running...\n");

  genericlistElement* l = createEl("First test string", 30, &printStr);
  traverse(l);
  printf("\n" );

  int num = 123;
  insertAfter(l, &num, sizeof(int), &printInt);
  traverse(l);
  printf("\n");

  deleteAfter(l);
  traverse(l);
  printf("\n");

  char a = 'a';
  push(&l, &a, sizeof(char), &printChar);
  traverse(l);
  printf("\n");

  printf("%d\n\n", length(l));

  pop(&l);
  traverse(l);
  printf("\n");

  float i = 12.5;
  enqueue(&l, &i, sizeof(float), printFloat);
  traverse(l);
  printf("\n");

  dequeue(l);
  traverse(l);
  printf("\n");

  printf("\nTests complete.\n");
}
