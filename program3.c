#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void vuln_fun(int d) 
{
 char buf[32]; 
   
    printf("Address of buf is at %p\n", buf);
    gets(buf);
}
int main()
{
    vuln_fun(0xdeadbeef);


    return 0;
}
