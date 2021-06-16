void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result_div_ab;
	int	rest_ab;

	result_div_ab = *a / *b;
	rest_ab = *a % *b;
	*a = result_div_ab;
	*b = rest_ab;
}
