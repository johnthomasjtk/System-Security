#include<stdio.h>

int main() {

  //int a=32769;
  int var_int= 2147483648;
  unsigned short var_un_sshort=65536;
  unsigned short int var_usi=65536;
  short d=32768;
  printf("unsigned short value: %u\n",var_un_sshort);
  printf("short value: %hi\n",d);
  printf("unsigned short value: %u\n",var_usi);
  printf("Int check limit: %d\n",var_int);
  return 1;
}
