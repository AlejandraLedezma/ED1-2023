#include <stdio.h>

int main(void) {
/*
  // Tipos de datos básicos
  printf("%ld bytes\n", sizeof(char));  
  printf("%ld bytes\n", sizeof(int));
  printf("%ld bytes\n", sizeof(long));
  printf("%ld bytes\n", sizeof(long long));  
  printf("%ld bytes\n", sizeof(long int));
  printf("%ld bytes\n", sizeof(float));
  printf("%ld bytes\n", sizeof(double)); 

  // Tipos de datos con modificadores
  printf("Tipo de datos con modificadores\n");
  printf("%ld bytes\n", sizeof(signed char));
  printf("%ld bytes\n", sizeof(unsigned short));
  printf("%ld bytes\n", sizeof(unsigned int)); 
  printf("%ld bytes\n", sizeof(unsigned long));
  printf("%ld bytes\n", sizeof(unsigned long long));
  printf("%ld bytes\n", sizeof(long double)); 
*/
float a = 2.5, b = 0.0005, c = 3000.;

    printf("%3f %3f %3f\n", a, b, c);
    printf("%8f %8f %8f\n", a, b, c);
    printf("%8.4f %e %12e\n", a, b, c);
    printf("%g %#g %-8f\n", a, b, c);

  return 0;
}