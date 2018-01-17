///ADD HEADER///
#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <fcntl.h>
# include "../libft/includes/libft.h"

typedef struct	s_point
{
    int			x;
    int			y;
}				t_point;

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
	char name; ///?
}				t_tetriminos;

t_list	*read_in_list(int fd);
t_tetriminos *get_one(char *str, char name);

//t_map			*solve(t_list *list);
//void			print_map(t_map *map);
//void			free_map(t_map *map);
//void			free_list(t_list *list);
#endif
