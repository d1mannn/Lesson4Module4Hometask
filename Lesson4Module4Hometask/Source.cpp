#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int task;

	do
	{	
		cout << "Введите номер задания - ";
		cin >> task;

		switch (task)
		{
			
#pragma region TASK1
			case 1:
			{
				cout << "Даны два целых числа A и B (A < B). \n";
				cout << "Найти все целые числа, расположенные между данными числами\n";
				cout << "(не включая сами эти числа), в порядке их убывания, а\n";
				cout << "также количество N этих чисел\n";
				int a, b, n = 0;
				do
				{
					a = 1 + rand() % 29;
					b = 1 + rand() % 29;

				} while (a > b);

				cout << "a = " << a << ", b = " << b << endl;
				for (int i = b; i > a; i--)
				{
					cout << i << endl;
					n += 1;
				} cout << "Количество чисел - " << n << endl;

			} break;
#pragma endregion

#pragma region TASK2
			case 2:
			{
				cout << "Дано целое число N (> 2) и две вещественные точки\n";
				cout << "на числовой оси: A, B (A < B). \n";
				cout << "Функция F(X) задана формулой F(X) = 1 – sin(X).\n";
				cout << "Найти значения функции F в N равноотстоящих точках,\n";
				cout << "образующих разбиение отрезка [A, B]: F(A), F(A + H), F(A + 2H),... , F(B).  \n";
				int n = 2 + rand() % 50, a, b, f;
				do
				{
					a = 1 + rand() % 50;
					b = 1 + rand() % 50;
					cout << "a = " << a << endl;
					cout << "b = " << b << endl;

				} while (a > b);
				for (int i = a; i <= b; i++)
				{
					f = 1 - sin(a + i);
					cout << "f = " << f << endl;
			}



			} break;
#pragma endregion

#pragma region TASK3
			case 3:
			{
				cout << "Дано число D (> 0).\n";
				cout << "Последовательность чисел AN определяется следующим образом: \n";
				cout << "A1 = 1, A2 = 2, AN = (AN–2+ AN–1)/2, N = 3, 4, ...\n";
				cout << "Найти первый из номеров K, для которых выполняется условие AK- AK–1 < D, \n";
				cout << "и вывести этот номер, а также числа AK–1 и AK\n";
				int d = 1 + rand() % 50, a, n, k;
				cout << "d = " << d << endl;
				for (int k = 1; k <= d; k++)
				{	
					for (int i = 1; i <=d; i++)
					{
						a = ((k * i - 2) + (k * i - 1)) / 2;
						cout << "a = " << a << endl;
						if ((a * k) - (a * k - 1) < d)
						{
							cout << "k = " << k << endl;
						}
					}
					
				}
			} break;
#pragma endregion

#pragma region TASK4

			case 4:
			{
				cout << "Задано натуральные числа от 10 до N. Вывести нечетные кратные пяти числа" << endl;
				int n = 50 + rand() % 350;
				cout << n << endl;
				for (int i = 10; i <= n; i++)
				{
					if (i % 2 != 0 && i % 5 == 0)
					{
						cout << i << endl;
					}
				}
			} break;
#pragma endregion

#pragma region TASK5

			case 5:
			{
				cout << "Вывести квадраты чисел от 11 до 99." << endl;
				for (int i = 11; i <= 99; i++)
				{
					cout << pow(i, 2) << endl;
				}
			} break;
#pragma endregion

#pragma region TASK6

			case 6:
			{
				cout << "Дана последовательность из n вещественных чисел, \n";
				cout << "начинающаяся с отрицательного числа. Определить, какое количество\n";
				cout << "отрицательных чисел записано в начале последовательности. \n";
				cout << "Условный оператор не использовать\n";
				int n = -100 + rand() % - 50;
				int a = 50 + rand() % 100;
				int res = 0;
				cout << "n = " << n << ", a = " << a << endl;
				for (int i = n; i <= a; i++)
				{

					while (i < 0)
					{
						cout << i << endl;
						res++;
						break;
					}
				} cout << "Количество отрицательных чисел в последовательности = " << res << endl;
			} break;
#pragma endregion

#pragma region TASK7

			case 7:
			{
				cout << "Дана последовательность целых чисел 1 2 18 , , ..., , a a a\n";
				cout << "в начале которой записано несколько равных между собой элементов.\n";
				cout << "Определить количество таких элементов последовательности. \n";
				cout << "Условный оператор не использовать\n";
				int n, n1, a, res = 0;
				cout << "Введите количество цифр в цикле - \n(чем больше число, тем больше вероятности совпадения) -  ";
				cin >> a;
				for (int i = 1; i <= a; i++)
				{
					n = 1 + rand() % a;
					n1 = 1 + rand() % a;
					while (n == n1)
					{
						res++;
						cout << n << " ===== " << n1 << endl;
						break;
					}
				} cout << "Количество парных чисел последовательности = " << res << endl;

			} break;
#pragma endregion

#pragma region TASK8

			case 8:
			{
				cout << "Известны оценки по информатике каждого из 20 учеников класса. \n";
				cout << "В начале списка перечислены все пятерки, затем все остальные оценки. \n";
				cout << "Сколько учеников имеют по информатике оценку \"5\"?\n";
				cout << "Условный оператор не использовать. Рассмотреть два случая:\n";
				cout << "a.известно, что пятерки имеют не все ученики класса\n";
				cout << "b.допускается, что пятерки могут иметь все ученики класса\n";
				int n = 0;

				for (int i = 1; i <= 20; i++)
				{
					int marks = 2 + rand() % 4;
					while (marks == 5)
					{
						n += 1;
						cout << "ученик № " << i << " - " << marks << endl;
						break;
					}
					while (marks != 5)
					{
						cout << "ученик № " << i << " - " << marks << endl;
						break;
					}
				} cout << "Пятерки имеют " << n << " учеников\n";

			} break;
#pragma endregion

#pragma region TASK9
			case 9:
			{
				cout << "Известны сведения о количестве осадков, выпавших за каждый день мая.\n";
				cout << "Первого мая осадков не было. Определить, в течение какого количества\n";
				cout << "первых дней месяца непрерывно, начиная с первого мая, осадков не было? \n";
				cout << "Условный оператор не использовать. Рассмотреть два случая:\n";
				cout << "a.известно, что в какие - то дни мая осадки выпадали\n";
				cout << "b.допускается, что осадков могло не быть ни в какой день мая\n";
				bool a;
				int n = 0;
				for (int i = 1; i <=30; i++)
				{
					a = 0 + rand() % 2;
					cout << a << endl;
					while (a == 0)
					{
						n += 1;
						break;
					}
				} cout << "Дождь не шел " << n << " дней" << endl;
			} break;
#pragma endregion

		}

	} while (task < 9);



	system("pause");
}