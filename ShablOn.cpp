#include <iostream>

using namespace std;

template <class T>
void OnceMassive(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 30 + 1;
}

template <class T>
void DoubleMassive(T arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			arr[r][c] = rand() % 100 + 1;
		}
	}
}

template <class T>
void MaxInOneMassive(T arr[], int size)
{
	int max{};
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Maximum in line massive: " << max << endl;
}

template <class T>
void MaxInDoubleMassive(T arr[][7], int size)
{
	int max{};
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			if (max < arr[r][c])
			{
				max = arr[r][c];
			}
		}
	}
	cout << "Maximum in double massive: " << max << endl;
}
template <class T>
void TripleMassive(T arr[][7][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			for (int w = 0; w < size; w++)
			{
				arr[r][c][w] = rand() % 400 + 1;
			}
		}
	}
}

template <class T>
void MaxInTripleMassive(T arr[][7][7], int size)
{
	int max{};
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			for (int w = 0; w < size; w++)
			{
				if (max < arr[r][c][w])
				{
					max = arr[r][c][w];
				}
			}
		}
	}
	cout << "Maximum in Triple massive: " << max << endl;
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));

	const int size = 7;
	int arr[size]{};
	int arr1[size][size]{};
	int arr2[size][size][size]{};
	OnceMassive(arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	MaxInOneMassive(arr, size);
	cout << endl;
	DoubleMassive(arr1, size);
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			cout << arr1[r][c] << "\t";
		}
		cout << endl;
	}
	MaxInDoubleMassive(arr1, size);

	cout << endl;
	TripleMassive(arr2, size);
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			for (int w = 0; w < size; w++)
			{
				cout << arr2[r][c][w] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}

	MaxInTripleMassive(arr2, size);

	return 0;
}
//3õÌÅÐÍÀß ÌÀÒÐÈÖÀ
//const int size = 10;
//int arr[size][size][size]{};
//
//for (int r = 0; r < size; r++)
//{
//	for (int c = 0; c < size; c++)
//	{
//		for (int w = 0; w < size; w++)
//		{
//			cout << arr[r][c][w] << " ";
//		}
//		cout << "|" << endl;
//	}
//}*/