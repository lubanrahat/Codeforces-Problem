#include <stdio.h>
#include <string.h>

int main() {

  double n;
  scanf("%lf",&n);

  if(n < 0) {
    printf("Out of Intervals\n");
  }else if(n >= 0 && n <= 25) {
    printf("Interval [0,25]\n");
  }
  else if(n > 25 && n <= 50) {
    printf("Interval (25,50]\n");
  }else if(n > 50 && n <= 75) {
    printf("Interval (50,75]\n");
  }else if(n > 75 && n <= 100) {
    printf("Interval (75,100]\n");
  }else if(n > 100) {
    printf("Out of Intervals\n");
  }

  return 0;
}