#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	int i = 0;
	
	if (!(*str))
		ft_putchar('a');
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			break;
		}
		i++;
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)	{
	if (argc != 2)
	{
		aff_a("");
		return (0);
	}
	aff_a(argv[1]);
}
