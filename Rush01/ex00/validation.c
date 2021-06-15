void	f_converte(char	*str, int	input[16]);
void	verification(char*str, int *number, int *counter);

int	space_verification(char c)
{
	if (c == 32)
	{
		return (1);
	}
	return (0);
}

int	valid_board(char *str)
{
	int	sum[4];
	int	input[16];
	int	count;
	int	c_aux;

	f_converte(str, input);
	count = 0;
	c_aux = 0;
	while (count < 16)
	{
		sum[c_aux] += input[count];
		count++;
		if (count > 0 && count % 4 == 0)
			c_aux++;
	}
	if (sum[0] + sum[1] == 16 || sum[0] + sum[1] == 17 || sum[0] + sum[1] == 18)
	{
		if (sum[2] + sum[3] == 16 || sum[2] + sum[3] == 17
			|| sum[2] + sum[3] == 18)
		{
			return (1);
		}
	}
	return (0);
}

int	validate_input(char *str)
{
	int	counter;
	int	invalid_number;

	invalid_number = 0;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (counter >= 31 || invalid_number != 0)
			return (0);
		if ((counter + 1) % 2 != 0)
		{
			if ((str[counter] >= '1' && str[counter] <= '4'))
				counter++;
			else
				invalid_number++;
		}
		if ((counter + 1) % 2 == 0)
		{
			verification(str[counter], &invalid_number, &counter);
		}
	}
	if (!valid_board(str))
		return (0);
	return (counter == 31);
}

void	verification(char str, int *number, int *counter)
{
	if (space_verification(str))
		counter++;
	else
		number++;
}
