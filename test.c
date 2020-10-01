#include <stdio.h>
#include <stdlib.h>

void func2 ()
{
  return;
}

void
func (void)
{
  int i = 0;

  for (i = 0; i < 10; i++)
    printf("Hello World !!!\n");
  return;
}

int
main ()
{
  func();
  return 0;
}
