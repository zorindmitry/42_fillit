///ADD HEADER///
#include "../includes/fillit.h"
# include <fcntl.h>
#include <unistd.h>

t_tetriminos		*new_tetrimino(char **tetr_inp, int x_inp, int y_inp, char name_inp)
{
	t_tetriminos		*tetris;

	tetris = ft_memalloc(sizeof(t_tetriminos));
	tetris->tetr = tetr_inp;
	tetris->x = x_inp;
	tetris->y = y_inp;
	tetris->name = name_inp;
	return (tetris);
}

t_tetriminos *get_one(char *str, char name)
{
	char **tetr;
	int x = 0;
	int y = 0;
	int i = 0;
	t_tetriminos *tetrimino_one;

	int j; //temp!
	char temp_str[4]; //temp!

	tetr = ft_memalloc(sizeof(char *) * (4) + 1); //4 это костыль
	i = 0;
	while (i < 3) //? maybe 4
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
	tetrimino_one = new_tetrimino(tetr, x, y, name);
	return (tetrimino_one);
}

t_list	*read_in_list(int fd)
{
	char			name;
	char			*buff;
	t_list			*list;
	t_tetriminos	*tetriminos_one;
	int				count;

	buff = ft_strnew(21);
	list = NULL;
	name = 'A';

	while (read(fd, buff, 21) >= 20)
	{
		if (!(tetriminos_one = get_one(buff, name++))) // ||check
		{
			ft_memdel((void **)&buff);
			//return;
		}
		ft_lstadd(&list,ft_lstnew(tetriminos_one, sizeof(t_tetriminos)));
		ft_memdel((void **)&tetriminos_one);
	}
	ft_memdel((void **)&buff);
	ft_lstrev(&list);
	return (list);
}
