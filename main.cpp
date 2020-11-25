#include "iostream"
#include "time.h"

using namespace std;

/*
* 
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	//заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20;
		arr[i] = arr[i] - 10;
	}
	//вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	//считаем сумму и кол-во положительных элементов
	int sum1 = 0, count1 = 0;
	int sum2 = 0, count2 = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 0) {
			sum1 += arr[i];
			count1++;
		}
		else {
			sum2 += arr[i];
			count2++;
		}
	}
	cout << "There are " << count1 << " positive elements" << endl;
	cout << "Their sum = " << sum1 << endl;

	cout << "There are " << count2 << " negative elements" << endl;
	cout << "Their sum = " << sum2 << endl;
	return 0;
}
*/
/*
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	//заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20 + 1;
	}
	//вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int min;
	//нашли самый первый честный элемент в массиве
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			min = arr[i];
			break;
		}
	}
	//прошли по всему массиву, ищем минимальный четный элемент
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0 && arr[i] < min) {
			min = arr[i];
		}
	}
	// even - чётный
	cout << "Minimum even element = " << min << endl;
	return 0;

}
*/
/*
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];


	//заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
	//вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int min = arr[0];

	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "Min elem = " << min << endl;

	int max = arr[0];

	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "Max elem = " << max << endl;
	return 0;

}
*/
/*
int main() {
	srand(time(NULL));
	const int size = 20;
	int arr[size];

	//заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 6;
	}
	//вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0)
			counter++;
	}
	cout << "Number of Null elements = " << counter << endl;
	return 0;
}
*/

void fillArray(int a[], int size);
void printArray(int a[], int size);

double findMultiplication(int a[], int size);

int findIndexMin(int a[], int size);
int findIndexMax(int a[], int size);
void swapElements(int a[], int minIndex, int maxIndex);

double avarage(int a[], int size);
int calcGreaterAvarage(int a[], int size, double average);


int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	fillArray(arr, size);

	// задача замены местами максимального и минимального элемента
	//cout << "Before swap" << endl;
	//printArray(arr, size);
	//int minIndex = findIndexMin(arr, size);
	//int maxIndex = findIndexMax(arr, size);
	//swapElements(arr, minIndex, maxIndex);
	//cout << "After swap" << endl;
	//printArray(arr, size);

	//double mul = findMultiplication(arr, size);
	//cout << "element = " << mul << endl;
	return 0;
}

double findMultiplication(int a[], int size) {
	double mul = 1;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 != 0) {
			mul *= a[i];
		}
	}
	mul /= 2;
	return mul;
}

int findIndexMin(int a[], int size){
	int index = 0;
	int min = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
			index = i;
		}
	}
	return index;
}

int findIndexMax(int a[], int size) {
	int index = 0;
	int max = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] < max) {
			max = a[i];
			index = i;
		}
	}
	return index;
}



void swapElements(int a[], int minIndex, int maxIndex) {
	int temp = a[minIndex];
	a[minIndex] = a[maxIndex];
	a[maxIndex] = temp;
}

double avarage(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	//(имя типа) переменная - приведения переменной к 
	//типу имя_типа
	// (double) x
	return (double) sum / 2;
}

int calcGreaterAvarage(int a[], int size, double average) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] > average)
			counter++;
	}
	return 0;
}


void fillArray(int a[], int size) {
	//заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100 + 1;
	}
}

void printArray(int a[], int size) {
	cout << "Array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
