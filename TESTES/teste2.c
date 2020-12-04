void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}