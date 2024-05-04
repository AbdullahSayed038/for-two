//include header
#include <unistd.h>
char	*ft_struppcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
        {
            *str -= 32;
        };
		return str;
}

char	*ft_stcapitalization(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if ((str[i - 1] >= 0 && str[i - 1] <= 47) ||
            (str[i - 1] >= 58 && str[i - 1] <= 64) ||
            (str[i - 1] >= 91 && str[i - 1] <= 96) ||
            (str[i - 1] >= 123 && str[i - 1] <= 127))
{
*ft_struppcase(&str[i]);
}
i++;
}
return (str);
}

// int main()
// {
//     char str[] = "this is a test//with special/characters";
//     printf("Before: %s\n", str); 
//     ft_stcapitalization(str); 
//     printf("After: %s\n", str);
//     return 0;
// }