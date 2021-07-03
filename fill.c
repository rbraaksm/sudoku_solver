#include "sudoku.h"

bool	checkHorizontal(char *sudoku, char nb)
{
	int	i;

	i = 0;
	while (sudoku[i])
	{
		if (sudoku[i] == nb)
			return (false);
		i++;
	}
	return (true);
}

bool	checkVertical(char **sudoku, int x, char nb)
{
	int	y;

	y = 0;
	while (y < 9)
	{
		if (sudoku[y][x] == nb)
			return (false);
		y++;
	}
	return (true);
}

bool	checkGrid(char **sudoku, int y, int x, char nb)
{
	int	x_top;
	int	y_top;

	x_top = (x / 3) * 3;
	y_top = (y / 3) * 3;
	y = 0;
	x = 0;
	while (y < 3)
	{
		x = 0;
		while (x < 3)
		{
			if (sudoku[y_top + y][x_top + x] == nb)
				return (false);
			x++;
		}
		y++;
	}
	return (true);
}

bool	fillNumber(char **sudoku, int y, int x, char nb)
{
	if (checkHorizontal(sudoku[y], nb) == false)
		return (false);
	if (checkVertical(sudoku, x, nb) == false)
		return (false);
	if (checkGrid(sudoku, y, x, nb) == false)
		return (false);
	return (true);
}
