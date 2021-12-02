#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{

  printf ("isfinite(0.0)       : %d\n",isfinite(0.0));
  printf ("isfinite(1.0/0.0)   : %d\n",isfinite(1.0/0.0));
  printf ("isfinite(-1.0/0.0)  : %d\n",isfinite(-1.0/0.0));
  printf ("isfinite(sqrt(-1.0)): %d\n",isfinite(sqrt(-1.0)));
  return 0;
}
