#include "sudoku.h"

bool	checkCharacter(char c)
{
	if (c == 46 || (c >= 48 && c <= 57))
		return (true);
	return (false);
}

bool	checkInput(char **income)
{
	int y;
	int	x;

	y = 1;
	while (income[y])
	{
		x = 0;
		while (income[y][x])
		{
			if (checkCharacter(income[y][x]) == false)
				return (false);
			x++;
		}
		y++;
		if (x > 9)
			return (false);
	}
	if (y > 10)
		return (false);
	return (true);
}
