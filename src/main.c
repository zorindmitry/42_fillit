///ADD HEADER///
#include "fillit.h"

int		main(int argc, char **argv)
{
	//init
	t_list	*input_list;	//contain list of tetrimins
	t_map	*res_map;		//contain result map

	if (argc != 2)	//what if folder?//
	{
		ft_putstr("Use only fillit input file"); //?
		return (1);
	}
	if(!(input_list = read_in_list(open(argv[1], O_RDONLY)))) //read file and return list of tetrimins
	{
		ft_putstr("Error to read/open"); //?
		return (1);
	}
	res_map = solve(input_list);  //solve and return map
	print_map(res_map); 	//print map on screen
	free_map(res_map); 		//free map
	free_list(input_list); 		//free input list
	return (0);
}