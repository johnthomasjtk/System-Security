
#include <stdio.h>
#include <string.h>


void func(char * arg1) {

  int authenticated = 0;
  char buffer[4];
  strcpy(buffer, arg1);

  if (authenticated) 
    printf("authenticated %d\n", authenticated);
  else 
    printf("not authenticated: %d\n", authenticated);
}
int main()
{

  char *mystr = "AuthMe!";
  func(mystr);
}
