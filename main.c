#include "logger.h"

int main(int argc, char **argv)
{
  int x = 5;
  logg(NULL,      "Value of x is %d\n",     x);

  x *= 2;
  logg("log.txt", "New value of x is %d\n", x);

  return 0;
}
