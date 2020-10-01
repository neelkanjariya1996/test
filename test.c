#include <stdio.h>
#include <stdlib.h>

void
func (void)
{
  int i = 0;

  for(i = 0; i < 10; i++)
    printf("Hello world!!\n");
}

int
main ()
{
  func();
  return 0;
}
