#include <stdio.h>

int main(){
  long int a = 1 << 30;
  a += 65534;
  printf("%ld", a);
  
  a = (long int) (a + 1.0);
  a -= 1;
  printf(" -> %ld\n", a);
  
}

