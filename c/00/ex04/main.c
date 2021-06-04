#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_is_negative(int n);

int main(int argc, char const *argv[])
{
	if ( argc <= 1){
		return 0;
	}

    int n;
	n = atoi(argv[1]);
	ft_is_negative(n);
    return 0;
}
