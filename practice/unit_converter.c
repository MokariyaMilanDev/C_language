#include <stdio.h>

int main(){
  float meter, kilometer;

  printf("Enter meter : ");
  scanf("%f", &meter);

  kilometer = meter / 1000;
  printf("Kilometer : %fkm", kilometer);

  return 0;
}