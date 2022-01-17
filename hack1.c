#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  __asm__("int 0x80");
  system("/bin/bash");
  return 0;
}
