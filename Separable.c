#include <stdio.h>

int separable (int a)
{
	if (a % 3 == 0)
	{
		return 1;
	}
		return 0;
}

int main ()
{
	int zahl;
	printf("Geben sie eine Zahl ein: ");
	scanf("%d", &zahl);
	if (separable(zahl)){
		printf("Die Zahl ist durch drei tailbar \n");
	}
	else
	{
		printf("-----------------------");
		printf("Die Zahl ist nicht durch drei tailbar");
	}
}
