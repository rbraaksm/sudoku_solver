#include "sudoku.h"

bool	startSolver(char **sudoku1, char **sudoku2)
{
	if (solverOption1(sudoku1) == true)
		return (printError());
	if (solverOption2(sudoku2) == true)
		return (printError());
	return (true);
}

int	main(int ac, char **av)
{
	char	**sudoku1;
	char	**sudoku2;

	if (ac != 10)
		printf("Error\n");
	if (checkInput(av) == false)
		return (printError());
	sudoku1 = createGrid(&av[1]);
	sudoku2 = createSecond(sudoku1);
	printSudoku(sudoku1);
	if (startSolver(sudoku1, sudoku2) == false)
		return (printError());
	if (checkForSame(sudoku1, sudoku2) == false)
		return (0);
	printf("\n");
	printSudoku(sudoku1);
	freeSudoku(sudoku1, sudoku2);
	return (0);
}
