#include <stdio.h> 

void swap ();

int main()
{
  double a;
  double b;
  printf("Geben Sie den ersten Double-Wert ein: ");
  scanf ("%lf", &a);
  
  printf("Geben Sie den zweiten Double-Wert ein: ");
  scanf ("%lf", &b);
  
  printf("Ausgabe vor Swap Erster Wert %lf: ", a);
  printf("Ausgabe vor Swap Zweiter Wert %lf: ", b);
  
  swap (&a, &b);
  printf("Erster Wert = %lf, Zweiter Wert = %lfc", a, b);
  
  return 0;
}
void swap (double * a, double * b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}
