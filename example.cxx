#include <time.h>

double variable = 3.0;

int fact(int n) {
  if (n <= 1) return 1;
  else return n * fact(n-1);
}

int mod(int x, int y) {
  return x % y;
}
	
const char *time()
{
  time_t ltime;
  time(&ltime);
  return ctime(&ltime);
}
