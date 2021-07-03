#include "sudoku.h"

static bool	findFree(char **sudoku, int *yi, int *xi)
{
	int	y;
	int	x;

	y = 8;
	while (y >= 0)
	{
		x = 8;
		while (x >= 0)
		{
			if (isEmpty(sudoku[y][x]) == true)
			{
				*yi = y;
				*xi = x;
				return (true);
			}
			x--;
		}
		y--;
	}
	return (false);
}

bool	solverOption2(char **sudoku)
{
	int		y;
	int		x;
	char	nb;

	if (findFree(sudoku, &y, &x) == false)
		return (false);
	nb = '1';
	while (nb <= '9')
	{
		if (fillNumber(sudoku, y, x, nb) == true)
		{
			sudoku[y][x] = nb;
			if (solverOption2(sudoku) == false)
				return (false);
			else
				sudoku[y][x] = 46;
		}
		nb++;
	}
	return (true);
}
