#include <stdio.h>
/*
 *
 * Small program to show how to get the address of a variable
 *
 */
int main()
{
  /* declare an int variable - no assignment */
  int x;
  /* print the value */
  printf ("x value:     %d\n", x);
  /* print the address 
  */
  printf ("x address:   %p\n", &x);

  
  return 0;
}
