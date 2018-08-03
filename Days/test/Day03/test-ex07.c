char	*ft_strrev(char *str);
void	ft_putstr(char *str);

int	main(void)
{
	char str[] = {"bonjour"};
	ft_putstr(ft_strrev(str));
}