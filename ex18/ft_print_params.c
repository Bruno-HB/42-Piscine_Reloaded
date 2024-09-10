#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int	ac, char **av)
{
	int	n;

	n = 1;
	while (n < ac)
	{
		ft_putstr(av[n]);
		ft_putchar('\n');
		n++;
	}
	return (0);
}