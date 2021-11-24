#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* �, const int n, const int Low, const int High, int i)
{
	�[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(�, n, Low, High, i + 1);
		
}

void Print(int* �, const int n, int i)
{
	cout << setw(4) << �[i];
	if (i < n - 1)
		Print(�, n, i + 1);
	else
		cout << endl;
}

int Count(int* �, const int n, int i, int count)
{
	if (!(�[i] % 2 == 0 || i % 13 == 0))
		count++;
	if (i < n - 1)
		Count(�, n, i + 1, count);
	else
		return count;
}

void Zero(int* �, const int n, int i)
{
	if (!(�[i] % 2 == 0 || i % 13 == 0))
		�[i] = 0;
	if (i < n - 1)
		return Zero(�, n, i + 1);
}

int Sum(int* �, const int n, int i, int S)
{
	if (!(�[i] % 2 == 0 || i % 13 == 0))
		S += �[i];
	if (i < n - 1)
		return Sum(�, n, i + 1, S);
	else
		return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 21;
	int �[n];

	int Low = 15;
	int High = 85;

	Create(�, n, Low, High, 0);
	Print(�, n, 0);

	cout << "S = " << Sum(�, n, 0, 0) << endl;
	cout << "Count = " << Count(�, n, 0, 0) << endl;

	Zero(�, n, 0);
	Print(�, n, 0);

	return 0;
}
