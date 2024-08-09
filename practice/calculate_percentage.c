#include <stdio.h>

int main(){
  // define variable for store data
  int subject_one_mark, subject_two_mark, subject_three_mark, total;
  float percentage; 

  // take three subject marks from user
  printf("Enter subject one marks : ");
  scanf("%d", &subject_one_mark);

  printf("Enter subject two marks : ");
  scanf("%d", &subject_two_mark);

  printf("Enter subject three marks : ");
  scanf("%d", &subject_three_mark);

  // logic
  total = subject_one_mark+subject_two_mark+subject_three_mark;
  percentage = total / 3.0;

  printf("Percentage: %f", percentage);

  return 0;
}
