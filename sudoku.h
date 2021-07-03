#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <string.h>

bool	checkInput(char **income);
char	**createGrid(char **av);
char	**createSecond(char **sudoku1);
bool	solverOption1(char **sudoku);
bool	solverOption2(char **sudoku);
bool	fillNumber(char **sudoku, int y, int x, char nb);
bool	checkForSame(char **sudoku1, char **sudoku2);

/* Utils */
void	printSudoku(char **sudoku);
bool	isEmpty(char c);
int		printError(void);
void	freeSudoku(char **sudoku1, char **sudoku2);
#endif
