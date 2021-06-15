#include<unistd.h>
void	f_converte(char *str, int	input[16]);
void	create_board(int input[16], int board[6][6]);
void	fill_input(int input[16]);
void	game(int board[6][6]);

void	f_rush(char	*str)
{
	int	input[16];
	int	line;
	int	column;
	int	board[6][6];
	char	letter;

	f_converte(str, input);
	create_board(input, board);
	line = 0;
	while (line < 6)
	{
		column = 0;
		while (column < 6)
		{
			letter = board[line][column] + '0';
			write(1, &letter, 1);
			write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
	game(board);
	write(1, "\n", 1);
	line = 1;
	while (line < 5)
	{
		column = 1;
		while (column < 5)
		{
			letter = board[line][column] + '0';
			write(1, &letter, 1);
			write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}

void	f_converte(char	*str, int	input[16])
{
	int	count;
	int	c_aux;

	count = 0;
	c_aux = 0;
	while (count < 31)
	{
		input[c_aux] = str[count] - '0';
		count += 2;
		c_aux++;
	}
}

void	create_board(int input[16], int board[6][6])
{
	int line;
	int column;
	int count;

	line = 0;
	while(line < 6)
	{
		column = 0;
		while(column < 6)
		{
			board[line][column] = 0;
			column++;
		}
		line++;
	}
	fill_input(input);
	line = 0;
	count = 0;
	while (line < 6)
	{
		column = 0;
		while (column < 6)
		{
			if(line == 0 && (column > 0 && column < 5))
				board[line][column] = input[count++];
			else if (line == 5 && (column > 0 && column < 5))
				board[line][column] = input[count++];
			else if (column == 0 && (line > 0 && line < 5))
				board[line][column] = input[count++];
			else if (column == 5 && (line > 0 && line < 5))
				board[line][column] = input[count++];
			column++;
		}
		line++;
	}
}

void	fill_input(int input[16])
{
	int aux[4];
	int count;
	int aux_c;
	int num[2];

	count = 4;
	aux_c = 0;
	num[0] = 4;
	num[1] = 7;
	while(count < 16)
	{
		if(count < 8)
			aux[aux_c++] = input[count];
		if(aux_c > 3)
			aux_c = 0;
		if(count % 2 == 0 && count < 12)
			input[count] = input[count + (num[0]--)];
		else if (count < 12)
			input[count] = input[count + (num[1]--)];
		if(count > 11)
			input[count] = aux[aux_c++];
		count++;
	}
}
