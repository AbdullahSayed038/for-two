//add 42 header
#include <unistd.h>
#include <stdio.h>
int ft_str_is_lowercase (char* str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{return (0);
		}
			i++;
	}
	return 1;
}

// int main()
// {
//     char str1[] = "hello";
//     char str2[] = "Hello";
//     char str3[] = "1234";

//     printf("Testing ft_str_is_lowercase function:\n");
//     printf("String 'hello': %d\n", ft_str_is_lowercase(str1));
//     printf("String 'Hello': %d\n", ft_str_is_lowercase(str2));
//     printf("String '1234': %d\n", ft_str_is_lowercase(str3));

//     return 0;
// }
