#include<iostream>
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";

}

void pow(int *num1, int num2) {
	int pow = 1;
	for (int i = 0; i < num2; i++) {
		pow *= *num1;
	}
	std::cout << pow;
}


int main() {
	setlocale(LC_ALL, "ru");
	int n,m;
	//Задача 1.
	const int size = 10;
	int arr[size]{ 1,2,3,4,5,6,7,8,9,10 };
	std::cout << "Изначальный массив \n";
	print_arr(arr,size);
	for (int i = 0; i < size; i+=2) {
		int tmp = *(arr + i);
		*(arr + i) = *(arr + i + 1);
		*(arr + i + 1) = tmp;
	}
	std::cout << " Сортированный массив \n";
	print_arr(arr, size);
	std::cout << std::endl;

	//Задача 2.
	std::cout << "Введите число ->";
	std::cin >> n;
	std::cout << "Введите степень в которую число нужно возвести -> ";
	std::cin >> m;
	std::cout << n << '*'  << m << " = "; 
	pow(&n, m);
	




	return 0;
}