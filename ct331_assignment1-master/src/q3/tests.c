#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "genericLinkedList.h"

void runTests(){
  printf("Tests running...\n");
  genericlistElement* l = createEl("First test string", 30, printStr);
  //Test create and traverse
  traverse(l);
  printf("\n" );

  //Test insert after
  int num = 123;
  insertAfter(l, &num, sizeof(int), &printInt);
  traverse(l);
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");

  //Test push
  char a = 'a';
  push(&l, &a, sizeof(char), &printChar);
  traverse(l);
  printf("\n");

  //Test length
  printf("%d\n\n", length(l));

  //Test pop
  pop(&l);
  traverse(l);
  printf("\n");

  //Test enqueue
  float i = 12.5;
  enqueue(&l, &i, sizeof(float), &printFloat);
  traverse(l);
  printf("\n");

  //Test dequeue
  dequeue(l);
  traverse(l);
  printf("\n");

  printf("\nTests complete.\n");
}
