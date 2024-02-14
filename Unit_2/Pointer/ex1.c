#include <stdio.h>

int main() {
  int m=29;
  int *p = &m;

  printf("Address of m :%p \n Value of m :%d\n",p,m);
  int *ab =&m;
  
  printf("Now ab is assigned with the address of m.\n");
  printf("Address of pointer ab:%p\n Content of pointer ab:%d",ab,m);
  m=34;
  printf(" The value of m assigned to 34 now.\n");
  printf(" Address of pointer ab : %p\n",ab);
  printf(" Content of pointer ab : %d\n\n",*ab);
  *ab =7;
  printf(" The pointer variable ab is assigned the value 7 now.\n");
  printf(" Address of pointer ab : %p\n",ab);
  printf(" Content of pointer ab : %d\n\n",*ab);

  return 0;
}