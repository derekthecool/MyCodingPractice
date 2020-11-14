/* Age To Days Challenge */
#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Enter your age in years:\n");
  int age = 0;
  scanf("%d",&age);

  printf("You are %d days old\n", age * 365);
  return 0;
}
