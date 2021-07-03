#include "sudoku.h"

bool	checkForSame(char **sudoku1, char **sudoku2)
{
	int	ret;

	ret = 0;
	for (int y = 0; y < 9; ++y)
		ret += strcmp(sudoku1[y], sudoku2[y]);
	if (ret != 0)
	{
		printf("Error: more than one solution\n");
		return (false);
	}
	return (true);
}
