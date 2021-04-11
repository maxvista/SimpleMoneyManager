#include <stdio.h>
#include <stdlib.h>

#include "new_instance.h"

int main(void) {
  FILE *balance = fopen("balance.txt", "r");

  float b;

  int c;

  float a;
  float s;
  float nb;

  fscanf (balance, "%f", &b);
  printf("Your Current Balance: %lf\n", b);
  printf("1. Add Money\n");
  printf("2. Subtract Money\n");
  printf("3. Exit\n");
  printf("Type the Number of Your Choice: ");
  scanf("%i", &c);
  if (c == 1) {
    fscanf (balance, "%f", &b);
    printf("Seperate with a dot not a comma.\n");
    printf("Enter the Amount added: ");
    scanf("%f", &a);
    nb = b + a;
    balance = freopen("balance.txt", "w", stdout);
    fprintf(balance, "\n%f", nb);
    new_ins();
  } else if (c == 2) {
    fscanf (balance, "%f", &b);
    printf("Seperate with a dot not a comma.\n");
    printf("Enter the Amount subtracted: ");
    scanf("%f", &s);
    nb = b - s;
    balance = freopen("balance.txt", "w", stdout);
    fprintf(balance, "%f", nb);
    new_ins();
  } else if (c == 3){
    ;
  } else {
    printf("Invalid Choice.");
  }
}
