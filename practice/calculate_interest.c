#include <stdio.h>

int main(){
  float P, R, N, interest;

  printf("Enter principal : ");
  scanf("%f", &P);

  printf("Enter rate : ");
  scanf("%f", &R);

  printf("Enter duration : ");
  scanf("%f", &N);

  interest = (P * R * N) / 100;
  printf("Interest : %f", interest);

  return 0;
}