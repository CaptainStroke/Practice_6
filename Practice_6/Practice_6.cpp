// Тема: Циклы
//Задания для самостоятельной работы 1

//Задание 1. Вывести на экран все числа от нуля до введенного пользователем числа.

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Enter number ";
//	int goal;
//	cin >> goal;
//	int number = 0;
//	while (number < goal)
//	{
//		cout << number << ", ";
//		number++;
//	}
//	cout <<goal << ".\n";
//}

//Задание 2. Пользователь вводит две границы диапазона, вывести на экран все числа из этого диапазона.
//Предусмотреть, чтобы пользователь мог вводить границы диапазона в произвольном порядке.
// ■ вывести все четные числа из диапазона.
// ■ вывести все нечетные числа из диапазона.
// ■ вывести все числа, кратные семи.

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Enter 2 numbers\n";
//	int a;
//	int b;
//	int c;
//	int d;
//	cin >> a;
//	cin >> b;
//	if (a > b) // For proper input 
//	{
//		c = a;
//		a = b;
//		b = c;
//		//cout << a << " upside " << b;
//	}
//	while (a < b)
//	{
//		cout << a << ", ";
//		a++;
//	}
//	cout << b << ".\n";
//}

//#include <iostream> //Odd numbers
//using namespace std;
//int main()
//{
//	cout << "Enter 2 numbers\n";
//	int a;
//	int b;
//	int c;
//	cin >> a;
//	cin >> b;
//	if (a > b) // For proper input 
//	{
//		c = a;
//		a = b;
//		b = c;
//		//cout << a << " upside " << b;
//	}
//	cout << "Odd numbers - ";
//	c = 2;
//	while (a <= b)
//	{
//		(a % c != 0) ? cout << a << ", " : cout << "";
//		
//		a++;
//	}
//}

//#include <iostream> // Even numbers
//using namespace std;
//int main()
//{
//	cout << "Enter 2 numbers\n";
//	int a;
//	int b;
//	int c;
//	cin >> a;
//	cin >> b;
//	if (a > b) // For proper input 
//	{
//		c = a;
//		a = b;
//		b = c;
//		//cout << a << " upside " << b;
//	}
//	cout << "Divided by number you enter, or just even if you enter 2 - ";
//	cin >> c;
//	while (a <= b)
//	{
//		(a % c == 0) ? cout << a << ", " : cout << "";
//		
//		a++;
//	}
//}

//Задание 3. Пользователь вводит две границы диапазона. Посчитать сумму всех чисел диапазона.

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Enter 2 numbers\n";
//	int a;
//	int b;
//	int c;
//	cin >> a;
//	cin >> b;
//	if (a > b) // For proper input 
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	c = 0;
//	while (a <= b)
//	{
//		c = c + a;
//		a++;
//	}
//	cout << c << " Sum";
//}

//Задание 4. Пользователь с клавиатуры вводит числа. 
//Посчитать их сумму и вывести на экран, как только пользователь введет ноль.

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "Enter number \n";
//	int a;
//	cin >> a;
//	int b;
//	b = 0;
//	while (a != 0)
//	{
//		b = b + a;
//		cin >> a;
//	}
//	cout << b << " Sum";
//}

//Задания для самостоятельной работы 2
//Задание 1. Написать игру «Угадай число». Программа загадывает число в диапазоне от 1 до 500.
//Пользователь пытается его угадать. После каждой попытки программа выдает подсказки,
//больше или меньше его число загаданного. В конце программа выдает статистику : за сколько
//попыток угадано число, сколько времени это заняло.
//Предусмотреть выход по 0, в случае, если пользователю надоело угадывать число.

// Задание 2. Написать программу - конвертер валют.Реализовать общение с пользователем через меню.