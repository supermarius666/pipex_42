#include "pipex.h"

void	handle_error(const char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}
int	error(char *msg)
{
	printf("%s\n", msg);
	// exit(EXIT_FAILURE);
}