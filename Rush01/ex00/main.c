void	ft_print_error(void );
int		f_rush(char *str);
int		validate_input(char *str);

int	main(int argc, char *argv[])
{
	if (argc != 2 || !validate_input(argv[1]))
	{
		ft_print_error();
		return (0);
	}
	f_rush(argv[1]);
	return (1);
}
