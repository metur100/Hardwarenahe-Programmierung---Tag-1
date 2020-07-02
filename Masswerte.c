#include <stdio.h> 

int main()
{
  float eingaben[10];
  int i;
 
  for (i = 0; i < 10; i++)
    * (eingaben + i) = 0;
 
  for (i = 0; i < 10; i++) /* Werte einlesen */
  {
    printf ("%d Element: ", i);
    scanf ("%f", (eingaben + i));
  }
  for (i = 0; i < 10; i++) /* Werte ausgeben */
  {
    printf ("%d Element Ausgabe: %f \n", i, *(eingaben + i));
  }
  return 0;
}
