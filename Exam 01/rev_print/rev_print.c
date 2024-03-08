#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	
}

int lens(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

void rev(char *str)
{
	int j = lens(str);
	char str_temp[j];
	int i = 0;

	while (str[i])
	{
		str_temp[j - 1] = str[i];
		i++;
		j--;
	}
	str_temp[i] = '\0';
	ft_putstr(str_temp);
	ft_putstr("\n");
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putstr("\n");
		return 0;
	}
	rev(argv[1]);
}
