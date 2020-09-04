// Author: Yeman Xu ybx5148@psu.edu
// Collaborator: Shiao Zhuang sqz5328@psu.edu
// Collaborator: Zhihong Jiang zbj5088@psu.edu
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
int main(void) {
  char *temperature =readline("Enter temperature in celsius: ");
  double temperature3 = atof(temperature)*1.8 +32;
  double temperature2 = atof(temperature);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temperature2, temperature3);
  return 0;
}