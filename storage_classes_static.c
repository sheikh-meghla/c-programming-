#include <stdio.h>

void count() {
  static int Num = 3; 
  Num++;
  printf("num = %d\n", Num);
}

int main() {
  count();
  count();
  count();
  return 0;
}