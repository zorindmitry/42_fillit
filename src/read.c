///ADD HEADER///
#include "../includes/fillit.h"
# include <fcntl.h>
#include <unistd.h>
int get_one(char *str, char name)
{
	char **tetr;
	int x;
	int y;
	int i;
	t_tetriminos *tetrimino_one;

	int j; //temp! must delete in the glory of NORMINETTE (FUCKIN 25 ROWS)
	char temp_str[4]; //temp! must delete in the glory of NORMINETTE (FUCKIN 25 ROWS)

	tetr = ft_memalloc(sizeof(char *) * (4)); //4 это костыль
	i = 0;
	while (i < 3)
	{
		while (j < 4)
		{
			str[j] = temp_str[j]; //check
			j++;
		}
		j = 0;
		tetr[i] = ft_strnew(4);
		ft_strcpy(tetr[i], str);
		i++;
	}
	tetr[i] = "\n";
	//tetrimino_one = new_tetrimino

	return (1);
}

int	read_in_list(int fd)
{
	char			name;
	char			*buff;
	t_list			*list;
	t_tetriminos	*tetriminos_one;
	int				count;

	buff = ft_strnew(21);
	name = 'A';

	while (read(fd, buff, 21) != 0)
	{
		if (!(get_one(buff, name))) // ||check
		{
			return (2);
		}
		else
			return (1);
	}
	return (1);
}
