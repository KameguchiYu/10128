#include <iostream>
#include <cstdlib>
using namespace std;

int random()
{
	return rand() % 99 + 1;
}

void algorithm(int* array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		array[i] = random();
	}
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = size - 1; j > i; --j)
		{
			if (array[i] > array[i + 1])
			{
				int empty = 0;
				empty = array[i];
				array[i] = array[i + 1];
				array[i + 1] = empty;
			}
		}
	}

}

void donealgorithm(const int* array, int size)
{
	cout << "�����̔z���";
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
	cout << "�ł��B" << endl;
}

int main()
{
	int size;
	int* array;
	cout << "�z��̑傫������͂��Ă��������B" << flush;
	cin >> size;
	array = new int[size];
	algorithm(array, size);
	donealgorithm(array, size);

	delete[] array;
}