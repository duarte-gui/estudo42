void game(int board[6][6])
{
	int	line;
	int	column;
	int count;

	line = 0;
	while(line < 6)
	{
		column = 0;
		while(column < 6)
		{
				if(line == 0 && board[line][column] == 1)
					if(board[line + 1][column] == 0)
						board[line + 1][column] = 4;
				if(line == 5 && board[line][column] == 1)
					if(board[line - 1][column] == 0)
						board[line - 1][column] = 4;
				if(column == 0 && board[line][column] == 1)
					if(board[line][column + 1] == 0)
						board[line][column + 1] = 4;
				if(column == 5 && board[line][column] == 1)
					if(board[line][column - 1] == 0)
						board[line][column - 1] = 4;
				if(line == 0 && board[line][column] == 4)
				{
					count = 1;
					while(count < 5)
					{
						if(board[line + count][column] == 0)
							board[line + count][column] = count;
						count++;
					}
				}
				if(line == 5 && board[line][column] == 4)
				{
					count = 1;
					while(count < 5)
					{
						if(board[line - count][column] == 0)
							board[line - count][column] = count;
						count++;
					}
				}
				if(column == 0 && board[line][column] == 4)
				{
					count = 1;
					while(count < 5)
					{
						if(board[line][column + count] == 0)
							board[line][column  + count] = count;
						count++;
					}
				}
			column++;
		}
		line++;
	}
}
