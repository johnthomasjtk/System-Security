#include <stdio.h>
#include <string.h>

void func(char * arg1) {

  char buffer[4];
  strcpy(buffer, arg1);
  printf("buffer %s\n", buffer);
  printf("length %d\n", strlen(arg1));
}

int main() {

//  char *mystr = "AuthMe!AAAABBBB";
  char *mystr = "AuthMe!";
  func(mystr);
}
