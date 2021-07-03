#include "sudoku.h"

bool	isEmpty(char c)
{
	if (c == 46)
		return (true);
	return (false);
}

int	printError(void)
{
	printf("Error\n");
	return (0);
}

void	printSudoku(char **sudoku)
{
	for (int i = 0; i < 9; ++i)
	{
		if (i == 3 || i == 6)
			printf("--------------------\n");
		for (int x = 0; x < 10; ++x)
		{
			if (x == 3 || x == 6)
				printf("|");
			printf("%c ", sudoku[i][x]);
		}
		printf("\n");
	}
	printf("\n");
}

void	freeSudoku(char **sudoku1, char **sudoku2)
{
	int	y;

	y = 0;
	while (y < 9)
	{
		free(sudoku1[y]);
		free(sudoku2[y]);
		y++;
	}
	free(sudoku1);
	free(sudoku2);
}