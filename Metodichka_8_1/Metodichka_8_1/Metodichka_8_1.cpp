#include <iostream>
#include <stdlib.h>
using namespace std;

/* �������� �������, ������� �������� ��������� ��-
�������� ����� ������������� ����� �������� ����-
�����, �������� ��� ����� ������ ����������� (��-
����� ��������� �� 2 �� 36). ��������, ��� �������� 
����� 27 �������� ��������� 16 ������ ���������� 
1B; 13��5-��� 23; 35 �18-��� 1H.
*/


int main()
{
	int sysar[36];
	int num, sysnum, i = 0, n;
	int ost, num1, resnum = 0, count = 1;

	setlocale(LC_ALL, "Russian");
	
		cout << "��� ��������� ��������� ����� � ����� ������� ���������.\n ���������� ������� �����: ";
		cin >> num;
		cout << "\n������� ������� ���������:";
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
			cout << "��� ��������� ��������� ����� � ����� ������� ���������.\n ���������� ������� �����: ";
			cin >> digit;
			cout << "\n������� ������� ���������:";
			int syst;
			cin >> syst;
			sys(digit, syst);
			cout << "���� ������ ����������, ������� 1: ";

		}

		while (digit == 1);
	}*/

