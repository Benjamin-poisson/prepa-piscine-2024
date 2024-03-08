#include <unistd.h>

void rot_13(char *str)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
		{
			j = 0;
			while (j < 13)
			{
				str[i] = str[i] + 1;
				if (str[i] > 'Z' && str[i] < 'a')
					str[i] = 'A';
				else if (str[i] > 'z')
					str[i] = 'a';
				j++;
				
			}
		}
		write(1, &str[i], 1);
	i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 1;
	}
	rot_13(argv[1]);
}
