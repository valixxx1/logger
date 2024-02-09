#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void logg(const char *path, const char *format, ...)
{
  va_list args;
  va_start(args, format);

  if (path == NULL) {
    vprintf(format, args);
  } else {
    FILE *file;
    if ((file = fopen(path, "w")) == NULL) {
      exit(-1);
    } else {
      vfprintf(file, format, args);
    }
  }

  va_end(args);
}
