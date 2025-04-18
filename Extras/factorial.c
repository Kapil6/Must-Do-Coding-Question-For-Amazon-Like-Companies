/**
 *      file    :  factorial.c
 *      author  :  kapil aggarwal
 *      created :  2024 Jun 07 15:59:35
 *      lastMod :  Fri Jun  7 15:59:35 2024
 **/

#include <stdio.h>
#include <string.h>

int fac(int n)
{
    if(n == 0)
        return 1;

    return n*fac(n-1);
}

int main() {
  int n  = 15;
  int res = 0;  
  res = fac(n);
  printf("Result: %d\n", res);
  return 0;
}    
