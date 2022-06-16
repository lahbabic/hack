#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{ 
  setreuid(getuid(), 0);
  system("/bin/bash");
}
