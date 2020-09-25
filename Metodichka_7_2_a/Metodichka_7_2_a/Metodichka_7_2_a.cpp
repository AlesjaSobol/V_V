#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

/*Дана квадратная матрица порядка n (n строк, n столб-
цов). Найти наибольшее из значений элементов, рас-
положенных в тёмно-синих частях матриц.
Все массивы в данном домашнем задании заполняются 
случайным образом.
*/

void main()
{
	const int STROKA = 10;
	const int STOLBIC = 10;

	int Arrus[STROKA][STOLBIC];

	srand(time(NULL));

	cout << endl;
	cout << "Matrix A\n";
	cout << endl;


	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			Arrus[i][j] = rand () % 150 - 200;
			cout << setw(5) << Arrus[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Matrix B main diagonal and up\n";
	cout << endl;

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if (i <= j)
			{
				Arrus[i][j] = rand() % 9;
				cout << setw(5) << Arrus[i][j] << " ";
			}
			else
				cout << setw(5) << Arrus[i][j] << " ";
		}
		cout << endl;
	}

	int max_main_diagonal_1 = Arrus[0][0];

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if (max_main_diagonal_1 < Arrus[i][j])
			{
				max_main_diagonal_1 = Arrus[i][j];

			}
		}
	}
	cout << endl;
	cout << "Max element Matrix B is " << max_main_diagonal_1 << " for up part"<< endl;
	cout << endl;

	//*****************************************************************

	cout << endl;
	cout << "Matrix C main diagonal and down\n";
	cout << endl;

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if (i >= j)
			{
				Arrus[i][j] = rand() % 5;
				cout << setw(5) << Arrus[i][j] << " ";
			}
			else
			{
				Arrus[i][j] = rand() % 150 - 200;
				cout << setw(5) << Arrus[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	int max_main_diogonal_2;

	max_main_diogonal_2 = Arrus[0][0];

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if (max_main_diogonal_2 < Arrus[i][j])
			{
				max_main_diogonal_2 = Arrus[i][j];
			}
		}
	}

	cout << endl;
	cout << "Max element Matrix C is " << max_main_diogonal_2 << " for down part " << endl;
	cout << endl;

	cout << "====================================\n";

	cout << endl;
	cout << "Matrix D additional diagonal and up\n";
	cout << endl;	

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if (i + j <= STOLBIC - 1)
			{
				Arrus[i][j] = rand() % 10 - 20;
				cout << setw(5) << Arrus[i][j] << " ";
											
			}	
			else
			{
				Arrus[i][j] = 0;
				cout << setw(5) << Arrus[i][j] << " ";
			}				
		}
		cout << endl;
	}
	cout << endl;

	int max_dop_diagonal_1;
	max_dop_diagonal_1 = Arrus[0][0];

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			Arrus[i][j] = rand() % 10 - 20;

			if (max_dop_diagonal_1 < Arrus[i][j])
			{
				max_dop_diagonal_1 = Arrus[i][j];
			}
		}
	}

	cout << endl;
	cout << "Max element Matrix D is " << max_dop_diagonal_1 << " for up part " << endl;
	cout << endl;

	//*****************************************************************

	cout << endl;
	cout << "Matrix E additional diagonal and down level\n";
	cout << endl;

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if (i + j >= STOLBIC - 1)
			{
				Arrus[i][j] = rand() % 5 - 10;
				cout << setw(5) << Arrus[i][j] << " ";

			}
			else
			{
				Arrus[i][j] = 0;
				cout << setw(5) << Arrus[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;

	int max_dop_diagonal_2;

	max_dop_diagonal_2 = Arrus[0][9]; // пришлось поменять индекс, т.к. это нижняя доп диагональ

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			Arrus[i][j] = rand() % 5 - 10;


			if (max_dop_diagonal_2 < Arrus[i][j])
			{
				max_dop_diagonal_2 = Arrus[i][j];
			}
		}
	}

	cout << endl;
	cout << "Max element Matrix E is " << max_dop_diagonal_2 << " for down part " << endl;
	cout << endl;

	//*****************************************************************

	cout << "====================================\n";

	cout << endl;
	cout << "Matrix F for triangle\n";
	cout << endl;

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			
				Arrus[i][j] = rand() % 9;
				cout << setw(7) << " ij " << i << j << " "<< Arrus[i][j];		

		}

		cout << endl;
	}
	
	cout << endl;
	cout << "Matrix G triangle down\n";
	cout << endl;

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if ((i + j > STOLBIC - 1)  && (i + j > STOLBIC - 1))
			{
				Arrus[i][j] = rand() % 9;
				cout << setw(4)<< Arrus[i][j];
			}
			
			cout << setw(4) << " ";
			}
		cout << endl;
	}


	int max_triangle_1;

	max_triangle_1 = Arrus[0][5]; // пришлось поменять индекс, т.к. это нижняя доп диагональ

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			
			if (max_triangle_1 < Arrus[i][j])
			{
				max_triangle_1 = Arrus[i][j];
			}
		}
	}

	cout << endl;
	cout << "Max element Matrix G is " << max_triangle_1 << " for down part " << endl;
	cout << endl;

	cout << endl;
	cout << "Matrix H triangle up\n";
	cout << endl;

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if (i < j)
			{
				Arrus[i][j] = rand() % 100;
				cout << setw(4) << Arrus[i][j];

			}
			cout << setw(4) << " ";

		}
		cout << endl;
	}

	int max_triangle_2;

	max_triangle_2 = Arrus[0][0]; // пришлось поменять индекс, т.к. это нижняя доп диагональ

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			Arrus[i][j] = rand() % 100;

			if (max_triangle_2 < Arrus[i][j])
			{
				max_triangle_2 = Arrus[i][j];
			}
		}
	}

	cout << endl;
	cout << "Max element Matrix H is " << max_triangle_2 << " for up part " << endl;
	cout << endl;

	cout << endl;
	cout << "Matrix I - two triangle \n";
	cout << endl;

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if ((i + j > STROKA) || (i + j > STOLBIC) || (i < j))
			{
				Arrus[i][j] = rand() % 20 - 30;
				cout << setw(4) << Arrus[i][j];

			}
			cout << setw(4) << " ";

		}
		cout << endl;
	}

	int max_triangle_3;

	max_triangle_3 = Arrus[0][1]; // пришлось поменять индекс, т.к. это нижняя доп диагональ

	for (int i = 1; i < STROKA; i++)
	{
		for (int j = 1; j < STOLBIC; j++)
		{
			Arrus[i][j] = rand() % 20 - 30;

			if (max_triangle_3 < Arrus[i][j])
			{
				max_triangle_3 = Arrus[i][j];
			}
		}
	}

	cout << endl;
	cout << "Max element Matrix I is " << max_triangle_3 << " for two triangle " << endl;
	cout << endl;

	//*****************************************************************

	cout << "==============================================================\n";

	cout << endl;
	cout << "Matrix J triangle left\n";
	cout << endl;

	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLBIC; j++)
		{
			if ((i > j) && (i + j < STOLBIC - 1))

			{
				Arrus[i][j] = rand() % 3 - 8;
				cout << setw(4) << Arrus[i][j];
			}

			cout << setw(4) << " ";
		}
		cout << endl;
	}

	int max_triangle_left;

	max_triangle_left = Arrus[1][0]; // пришлось поменять индекс, т.к. это нижняя доп диагональ

	for (int i = 1; i < STROKA; i++)
	{
		for (int j = 1; j < STOLBIC; j++)
		{
			Arrus[i][j] = rand() % 3 - 8;

			if (max_triangle_left < Arrus[i][j])
			{
				max_triangle_left = Arrus[i][j];
			}
		}
	}

	cout << endl;
	cout << "Matrix K triangle right\n";
	cout << endl;

	for (int i = STROKA/2; i > 0; i--)
	{
		for (int j = STOLBIC/2; j > 0; j--)
		{
			
			if ((i + j > STOLBIC - 1) || (i < j))
			{
					Arrus[i][j] = rand() % 2;
					cout << setw(4) << Arrus[i][j];
			}
				cout << setw(4) << " ";
		}
		cout << endl;
	}

}