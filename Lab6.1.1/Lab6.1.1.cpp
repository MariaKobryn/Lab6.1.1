#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* ñ, const int n, const int Low, const int High, int i)
{
	ñ[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(ñ, n, Low, High, i + 1);
		
}

void Print(int* ñ, const int n, int i)
{
	cout << setw(4) << ñ[i];
	if (i < n - 1)
		Print(ñ, n, i + 1);
	else
		cout << endl;
}

int Count(int* ñ, const int n, int i, int count)
{
	if (!(ñ[i] % 2 == 0 || i % 13 == 0))
		count++;
	if (i < n - 1)
		Count(ñ, n, i + 1, count);
	else
		return count;
}

void Zero(int* ñ, const int n, int i)
{
	if (!(ñ[i] % 2 == 0 || i % 13 == 0))
		ñ[i] = 0;
	if (i < n - 1)
		return Zero(ñ, n, i + 1);
}

int Sum(int* ñ, const int n, int i, int S)
{
	if (!(ñ[i] % 2 == 0 || i % 13 == 0))
		S += ñ[i];
	if (i < n - 1)
		return Sum(ñ, n, i + 1, S);
	else
		return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 21;
	int ñ[n];

	int Low = 15;
	int High = 85;

	Create(ñ, n, Low, High, 0);
	Print(ñ, n, 0);

	cout << "S = " << Sum(ñ, n, 0, 0) << endl;
	cout << "Count = " << Count(ñ, n, 0, 0) << endl;

	Zero(ñ, n, 0);
	Print(ñ, n, 0);

	return 0;
}
