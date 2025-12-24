#define n 8
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void fill(int*, int);
int count(int*, int);
void print(int*, int);

void main(void)
{
	setlocale(LC_ALL, "rus");

	int A[n], znach;
	fill(A, n);
	print(A, n);
	znach = count(A, n);
	if (znach == 0)
	{
		printf("\nНету элементов равных первому элементу массива");
	}
	else
	{
		printf("\nКоличество элементов массива, значения которых равны первому элементу: %i", znach);
	}

	_getch();
}

void fill(int *ptr, int size)
{
	srand(time(NULL));

	int i;
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = rand() % 10;
	}
}

void print(int *ptr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%2i", *(ptr + i));
	}
}

int count(int *ptr, int size)
{
	int k = 0;
	int i;

	for (i = 1; i < size; i++)
	{
		if (*ptr == *(ptr + i))
		{
			k++;
		}
	}

	return k;
}