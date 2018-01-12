///ADD HEADER///
#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <fcntl.h>
# include "../libft/includes/libft.h"




typedef struct	s_map
{
	int			size;
	char		**array;
}				t_map;

typedef struct s_tetriminos
{
	char **tetr;
	int x;
	int y;
	char value; ///?
}				t_tetriminos;

int	read_in_list(int fd);
//t_list	*read_in_list(int fd);


//t_map			*solve(t_list *list);
//void			print_map(t_map *map);
//void			free_map(t_map *map);
//void			free_list(t_list *list);
#endif
