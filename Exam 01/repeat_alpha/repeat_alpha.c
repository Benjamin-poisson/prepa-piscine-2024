#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void rep(char *str)
{
	int i= 0;
	int j = 0;
	int t = 0;
	while (str[i])
	{
		j = 0;
		t = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			t = str[i];
			while (j <= t-65)
			{
				ft_putchar(str[i]);
				j++;
			}
			
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			t = str[i];
			while (j <= t-97)
			{
				ft_putchar(str[i]);
				j++;
			}
			
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}



int main(int argc, char **argv)	{
	if(argc != 2)	{
		ft_putchar('\n');	
		return(0);
		}
	rep(argv[1]);
}
