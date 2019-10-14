#include <stdio.h>
//multiplication
void multiple(int i, int num, int limit){
  printf("%4d    ",i*num);
  if (i == limit) {
    printf("\n");
    return;
  }
  multiple(i+1,num,limit);
}
/************//************/
//multiplication but from behind
void backwardsmultiplication(int i, int num, int limit) {
  if (i == limit+1) {//because we also want (limit*num).
    printf("\n");
    return;  // it returns void and the function completes and goes back to the previous function it was recursively called.
  }
  backwardsmultiplication(i+1,num,limit); //this continues until the if condition above is satisfied.
  printf("%4d    ",i*num); //after this too, the function completes and goes back.
}
/************//************/
int main(){
  int num;
  int limit;
  //genralised
  /*
  printf("%s\n", "enter the number to be multiplied");
  scanf("%f", &num);
  printf("%s\n", "enter the number of multiples you want");
  scanf("%d", &limit);
  printf("%s\n", "the numbers are:");
  */
  //for a 12x12 matrix,
  for (int i = 0; i < 13; i++) {
    multiple(1,i,12);
  }
  return 0;
}
