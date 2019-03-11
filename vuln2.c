#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(char *arg, short arglen)
{
  int maxlen = 4000;
  char buf[4000];

  printf ("length=%d\n",arglen);
  if (arglen < maxlen)
  {
    printf("copy successful\n"); 
    memcpy(buf, arg, strlen(arg));
  }
  else
    printf("copy failed\n"); 
  return 0;
}

int main(int argc, char *argv[])
{
  if (argc != 2)
    {
      fprintf(stderr, "target2: argc != 2\n");
      exit(EXIT_FAILURE);
    }
  printf("The string length: %d\n",strlen(argv[1]));
  foo(argv[1], strlen(argv[1]));

  return 0;
}
