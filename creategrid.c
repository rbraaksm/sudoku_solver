#include "sudoku.h"

char	**createSecond(char **sudoku1)
{
	char	**tmp;

	tmp = calloc(10, sizeof(char *));
	for (int i = 0; i < 9; ++i)
	{
		for (int x = 0; x < 10; ++x)
			tmp[i] = strdup(sudoku1[i]);
	}
	return (tmp);
}

char	**createGrid(char **av)
{
	char	**tmp;

	tmp = calloc(10, sizeof(char *));
	for (int i = 0; i < 9; ++i)
	{
		for (int x = 0; x < 10; ++x)
			tmp[i] = strdup(av[i]);
	}
	return (tmp);
}
