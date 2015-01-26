//This is the line causing issue in the conflict branch
#include <stdio.h>

int main()
{
  int a;
  printf ("Enter value for a");
  scanf ("%c", &a);
  int b;
  printf ("Enter value for b");
  scanf ("%c", &b);

  if (a % b !=0) {
     printf("The remainder is: %i", a%b);
}

main 0;

