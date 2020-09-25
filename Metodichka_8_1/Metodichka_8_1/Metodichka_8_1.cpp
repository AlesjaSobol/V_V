#include <iostream>
#include <stdlib.h>
using namespace std;

/* Написать функцию, которая получает в качестве ар-
гументов целое положительное число и систему счис-
ления, в которую это число должно переводится (си-
стемы счисления от 2 до 36). Например, при переводе 
числа 27 в систему счисления 16 должно получиться 
1B; 13 в 5-ю — 23; 35 в 18-ю — 1H.
*/


int main()
{
	int sysar[36];
	int num, sysnum, i = 0, n;
	int ost, num1, resnum = 0, count = 1;

	setlocale(LC_ALL, "Russian");
	
		cout << "Эта программа переводит числа в любую систему счисления.\n Пожалуйста введите число: ";
		cin >> num;
		cout << "\nВведите систему счисления:";
		cin >> sysnum;
		
		while (num > 0)
		{
			num1 = num;
			num /= sysnum;
			ost = num1 - num * sysnum;
			sysar[i] = ost;
			i++;
		}
		i--;
		for (; i >= 0; i--)
		{
			if (sysar[i] >= 10)
			{
				n = sysar[i] + 55;
				cout << char(n);
			}
			else
			{
				cout << sysar[i];
			}
			cout << "\n";

		}

		return (EXIT_SUCCESS);
}

/*void sys(int digit, int syst)
{
	int i = 0;
	int A[50];

	for (int i = 0; digit > 0; i++)
	{
		A[i] = digit % syst;
		digit /= syst;

	}
	for (int j = i - 1; j >= 0; j--)
	{
		if (A[j] < 10)
		{
			cout << A[j];
		}
		else
			cout << char(A[j] - 10 + 'A');
	}
}

	int main()
	{
		setlocale(LC_ALL, "Russian");
		int digit;
		do
		{
			cout << "Эта программа переводит числа в любую систему счисления.\n Пожалуйста введите число: ";
			cin >> digit;
			cout << "\nВведите систему счисления:";
			int syst;
			cin >> syst;
			sys(digit, syst);
			cout << "Если хотите продолжить, нажмите 1: ";

		}

		while (digit == 1);
	}*/

