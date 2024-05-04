//add header
int ft_str_is_printable(char *str)
{
	int i;
	i=0;
	while(str[i] != '\0')
	{
	if(str[i] <= 31 || str[i] >= 0)
		{
			return (0);
		}
			i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
    char str1[] = "Hello, World!"; // Printable string
    char str2[] = "Hello\tWorld"; // Contains a tab character (non-printable)
    char str3[] = "Hello\nWorld"; // Contains a newline character (non-printable)

    printf("Testing ft_str_is_printable function:\n");
    printf("String 'Hello, World!': %d\n", ft_str_is_printable(str1));
    printf("String 'Hello\\tWorld': %d\n", ft_str_is_printable(str2));
    printf("String 'Hello\\nWorld': %d\n", ft_str_is_printable(str3));

    return 0;
}
