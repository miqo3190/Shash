#include "classShashkes.h"

void Shashk::startGame()
{
	{
		arr[0][1] = '$';
		arr[0][3] = '$';
		arr[0][5] = '$';
		arr[0][7] = '$';
		arr[2][1] = '$';
		arr[2][3] = '$';
		arr[2][5] = '$';
		arr[2][7] = '$';
		arr[1][0] = '$';
		arr[1][2] = '$';
		arr[1][4] = '$';
		arr[1][6] = '$';
		arr[6][1] = '#';
		arr[6][3] = '#';
		arr[6][5] = '#';
		arr[6][7] = '#';
		arr[7][0] = '#';
		arr[7][2] = '#';
		arr[7][4] = '#';
		arr[7][6] = '#';
		arr[5][0] = '#';
		arr[5][2] = '#';
		arr[5][4] = '#';
		arr[5][6] = '#';
	}
	system("cls");
	std::cout << "N|0||1||2||3||4||5||6||7|\n0";
	for (int i = 0,k=1; i < 8; ++i,k++)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (arr[i][j] != '$' && arr[i][j] != '#')
			{
				arr[i][j] = ' ';
			}
				std::cout <<"|" << arr[i][j]<<"|";
		}
		std::cout << std::endl<<(k);
	}
		
}
void Shashk::nextStep()
{
	while (count$ || count_)
	{
		if (chek == '#')
		{
			std::cout << "Step is '#' \n";
			chek = '$';
			std::cout << "Enter please X1 \n";
			std::cin >> firstX;
			std::cout << "Enter please Y1 \n ";
			std::cin >> firstY;
			while (arr[firstX][firstY] != '#')
			{
				std::cout << "Enter please X1 \n";
				std::cin >> firstX;
				std::cout << "Enter please Y1 \n ";
				std::cin >> firstY;
			}
			std::cout << "Enter please X2 \n";
			std::cin >> secondX;
			while (secondX != firstX - 1 )
			{
				std::cout << "Enter please X2 \n";
				std::cin >> secondX;
			}
			std::cout << "Enter please Y2 \n ";
			std::cin >> secondY;
			while (secondY != firstY - 1  && secondY != firstY + 1)
			{
				std::cout << "Enter please Y2 \n ";
				std::cin >> secondY;
			}
			if (arr[secondX][secondY] == ' ')
			{
				arr[firstX][firstY] = ' ';
				arr[secondX][secondY] = '#';
			}
			if (arr[secondX][secondY] == '#')
			{
				std::cout << "Enter please X2 \n";
				std::cin >> secondX;
				while (secondX != firstX - 1 )
				{
					std::cout << "Enter please X2 \n";
					std::cin >> secondX;
				}
				std::cout << "Enter please Y2 \n ";
				std::cin >> secondY;
				while (secondY != firstY - 1 && secondY != firstY + 1)
				{
					std::cout << "Enter please Y2 \n ";
					std::cin >> secondY;
				}
			}

			if (arr[secondX][secondY] == '$')
			{
				if (secondY - firstY < 0)
				{
					if (arr[secondX - 1][secondY - 1] == '$')
					{
						std::cout << "Enter please X2 \n";
						std::cin >> secondX;
						while (secondX != firstX - 1 )
						{
							std::cout << "Enter please X2 \n";
							std::cin >> secondX;
						}
						std::cout << "Enter please Y2 \n ";
						std::cin >> secondY;
						while (secondY != firstY - 1 && secondY != firstY + 1)
						{
							std::cout << "Enter please Y2 \n ";
							std::cin >> secondY;
						}
					}
					else
					{
						arr[firstX][firstY] = ' ';
						arr[secondX - 1][secondY - 1] = '#';
						arr[secondX][secondY] = ' ';
						count$--;
					}

				}
				else if(secondY - firstY > 0)
				{
					if (arr[secondX - 1][secondY + 1] == '$')
					{
						std::cout << "Enter please X2 \n";
						std::cin >> secondX;
						while (secondX != firstX - 1 )
						{
							std::cout << "Enter please X2 \n";
							std::cin >> secondX;
						}
						std::cout << "Enter please Y2 \n ";
						std::cin >> secondY;
						while (secondY != firstY - 1 && secondY != firstY + 1)
						{
							std::cout << "Enter please Y2 \n ";
							std::cin >> secondY;
						}

					}
					else
					{
						arr[secondX][secondY] = ' ';
						arr[firstX][firstY] = ' ';
						arr[secondX - 1][secondY + 1] = '#';
						
						count$--;
					}
				}
			}
			
			system("cls");
			std::cout << "N|0||1||2||3||4||5||6||7|\n0";
			for (int i = 0,k=1; i < 8; ++i,k++)
			{
				for (int j = 0; j < 8; ++j)
				{
					if (arr[i][j] != '$' && arr[i][j] != '#')
					{
						arr[i][j] = ' ';
					}
					std::cout << "|" << arr[i][j] << "|";
				}
				std::cout << std::endl << (k);
			}
		}
		if (chek == '$')
		{
			std::cout << "Step is '$' \n";
			chek = '#';
			std::cout << "Enter please X1 \n";
			std::cin >> firstX;
			std::cout << "Enter please Y1 \n ";
			std::cin >> firstY;
			while (arr[firstX-1][firstY-1] != '$')
			{
				std::cout << "Enter please X1 \n";
				std::cin >> firstX;
				std::cout << "Enter please Y1 \n ";
				std::cin >> firstY;
			}
			std::cout << "Enter please X2 \n";
			std::cin >> secondX;
			while (secondX != firstX + 1 )
			{
				std::cout << "Enter please X2 \n";
				std::cin >> secondX;
			}
			std::cout << "Enter please Y2 \n ";
			std::cin >> secondY;
			while (secondY != firstY + 1 && secondY != firstY - 1)
			{
				std::cout << "Enter please Y2 \n ";
				std::cin >> secondY;
			}
			if (arr[secondX][secondY] == ' ')
			{
				arr[firstX][firstY] = ' ';
				arr[secondX][secondY] = '$';
			}
			if (arr[secondX][secondY] == '#')
			{
				if (secondY - firstY > 0)
				{
					if (arr[secondX + 1][secondY + 1] == '#')
					{
						std::cout << "Enter please X2 \n";
						std::cin >> secondX;
						while (secondX != firstX + 1 )
						{
							std::cout << "Enter please X2 \n";
							std::cin >> secondX;
						}
						std::cout << "Enter please Y2 \n ";
						std::cin >> secondY;
						while (secondY != firstY + 1 && secondY != firstY - 1)
						{
							std::cout << "Enter please Y2 \n ";
							std::cin >> secondY;
						}
					}
					else
					{
						arr[firstX][firstY] = ' ';
						arr[secondX + 1][secondY + 1] = '$';
						arr[secondX][secondY] = ' ';
						count_--;
					}

				}
				else if(secondY - firstY < 0)
				{
					if (arr[secondX + 1][secondY - 1] == '$')
					{
						std::cout << "Enter please X2 \n";
						std::cin >> secondX;
						while (secondX != firstX + 1 )
						{
							std::cout << "Enter please X2 \n";
							std::cin >> secondX;
						}
						std::cout << "Enter please Y2 \n ";
						std::cin >> secondY;
						while (secondY != firstY + 1 && secondY != firstY - 1)
						{
							std::cout << "Enter please Y2 \n ";
							std::cin >> secondY;
						}
					}
					else
					{
						arr[firstX][firstY] = ' ';
						arr[secondX + 1][secondY - 1] = '$';
						arr[secondX][secondY] = ' ';
						count_--;
					}
				}
			}
			
			system("cls");
			std::cout << "N|0||1||2||3||4||5||6||7|\n0";
			for (int i = 0,k=1; i < 8; ++i,k++)
			{
				for (int j = 0; j < 8; ++j)
				{
					if (arr[i][j] != '$' && arr[i][j] != '#')
					{
						arr[i][j] = ' ';
					}
					std::cout << "|" << arr[i][j] << "|";
				}
				std::cout << std::endl << k;
			}
		}
	}
	std::cout << "Game over bro!! ";
}
bool Shashk::wingame1()
{
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (arr[i][j] != ' ')
			{
				cond = arr[i][j];
			}
		}
	}
	if (cond != '#')
	{
		return false;
	}
	if (cond != '$')
	{
		return false;
	}
	return true;
	
}
/*void Shashk::eatFigure(int x2, int y2, int x1, int y1)
{
	if (arr[x2][y2] == '$')
	{
		if (x2 - x1 > 0)
		{
			if (arr[x2 - 1][y2 - 1] == '$')
			{
				//please try again
			}
			else
			{
				arr[x1][y1] = ' ';
				arr[x2 - 1][y2 - 1] = '#';
			}

		}
		else
		{
			if (arr[x2 + 1][y2 - 1] == '$')
			{

			}
			else
			{
				arr[x1][y1] = ' ';
				arr[x2 + 1][y2 - 1] == '#';
			}
		}
	}
}*/