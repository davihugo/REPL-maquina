#include <stdio.h>

#include "interpret.h"
#include "stack.h"


static void repl()
{
  char line[1024];
  for (;;)
  {
    printf("> ");

    if (!fgets(line, sizeof(line), stdin))
    {
      printf("\n");
      break;
    }

    interpret(line);
  }
}




int main () {
/*
    Stack* s = new_stack(100);
    stack_push(s,15);
    stack_push(s,25);
    int x = stack_pop(s);
    printf ("%d\n",x);
    x = stack_pop(s);
    printf ("%d\n",x);
*/  
    interpreter_init();
    repl();
    return 0;
}