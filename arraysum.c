#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* I just added this comment */
int solveMeFirst(int a, int b) {
    return(a+b);
  
}
int main() {
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  int sum; 
  sum = solveMeFirst(num1,num2);
  printf("%d",sum);
  return 0;
}

