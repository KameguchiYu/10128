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
	cout << "昇順の配列は";
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << " ";
	}
	cout << "です。" << endl;
}

int main()
{
	int size;
	int* array;
	cout << "配列の大きさを入力してください。" << flush;
	cin >> size;
	array = new int[size];
	algorithm(array, size);
	donealgorithm(array, size);

	delete[] array;
}