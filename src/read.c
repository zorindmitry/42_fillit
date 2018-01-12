#include "fillit.h"

////



t_list	*read_in_list(int fd)
{
	char			name;
	char			*buff;
	t_list			*list;
	tetriminos_one	*t_tetriminos;
	int				count;

	buff = ft_strnew(21);
	name = 'A';

	while (count = read(fd, buff, 21))
	{
		if (!(tetriminos_one = get_one(buff, cur))) // ||check
		{
			//del free 
		}
	}
}
