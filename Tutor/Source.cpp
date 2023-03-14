#include <iostream>

double sum(double a, double b = 0, double c = 0 , double e = 0, double f = 0) {
	return (a + b + c + e + f);
}

inline double mean(double a, double b, double c) {// Встраиваемая функция inline для быстроты работы.
	return double(a + b + c) / 3.0;// Если double то 3,0 (Вещественное число) а 3  целое. и double не поймет.
}

template <typename T>
int prime(T arr[], const int length) {	
	for (int i = 0; i < length; i++) {
		int	counter = 0;
		for(int k = 1;k <= arr[i];k++)
			if(arr[i] % k == 0)
				counter++;
		if (counter == 2)
			return arr[i];
	}
}



int main() {
	/*std::cout << "Summa - " << sum(15, 10, 10, 20, 10) << std::endl;//65
	std::cout << "Summa - " << sum(15, 10, 10) << std::endl;// 35
	//std::cout << "Summa - " << sum() << std::endl;// Ошибка
	std::cout << "Summa - " << sum(15) << std::endl;// 35
	*/

	/*int f = 10;
	int e = 12;
	int h = 15;

	std::cout << mean(f, e, h) << std::endl;*/



	const int size = 5;
	int array[size]{ 6, 1, 7 , 8, 3 };

	std::cout << prime(array, size);


	return 0;
}