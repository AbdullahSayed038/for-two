//include header
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
unsigned int count;
int i;
i = 0;
count = 0;
while(str[i] != '\0' && count <= size - 1)
{

		dest[i] = src[i];
		i++;
		count++;
	
}
dest[count] = '\0';
return count; //because we have to know how long dest is
}
