#include <unistd.h>
#include <stdlib.h>

int main(void)
{	
	t_node *begin_list;
	int height;
	int width;

	begin_list = NULL;
	save_stdin(&begin_list);
	height = get_height(begin_list);
	width = get_width(begin_list);
	compare_rushes(begin_list, width, height);
	return (0);
}






int		save_stdin(t_node **begin_list)
{
	int fd;
	int ret;
	char buf[1];

	while((ret = read(0, buf, 1)))
	{
		if (ret < 0)
		{
			write(1, "read() error!", 13);
			return (1);
		}
		push_node(begin_list, buf[0]);
	}
	return (0);
}


