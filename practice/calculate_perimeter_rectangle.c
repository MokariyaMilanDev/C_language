#include <stdio.h>

int main(){
  int L, W, perimeter;

  printf("Enter lenght (m) : ");
  scanf("%d", &L);

  printf("Enter width (m) : ");
  scanf("%d", &W);

  perimeter = 2 * (L + W);
  printf("Perimeter of rectangle is %d/m", perimeter);

  return 0;
}