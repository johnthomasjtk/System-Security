#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  unsigned short s;
  int i;
  char buf[80];

  if(argc < 3)
  {
    return -1;
  }

  i = atoi(argv[1]);
  s = i;
  printf("s = %d\n", s); 	
  if(s >= 80)
  {           
    printf("Oh no you don't!\n");
    return -1;
  }

  

  memcpy(buf, argv[2], i);
  buf[i] = '\0';
  printf("buffer: %s\n", buf);

  return 0;
}


