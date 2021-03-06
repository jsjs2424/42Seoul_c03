#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char s1[100] = "abcde";
	char s2[] = "abcdee";
	char s3[] = "abcdf";
	char s4[] = "abcde";

	printf("\n============%d===================\n", 0);

	printf("%s, %s (%d)\n", s1, s2, ft_strcmp(s1, s2));
	printf("%s, %s (%d)\n", s3, s1, ft_strcmp(s3, s1));
	printf("%s, %s (%d)\n", s2, s3, ft_strcmp(s2, s3));
	printf("%s, %s (%d)\n", s1, s4, ft_strcmp(s1, s4));
	printf("\n============%d===================\n", 1);
	printf("6 4 5 3 \n");
	printf("%s, %s (%d)\n", s1, s2, ft_strncmp(s1, s2, 6));
	printf("%s, %s (%d)\n", s3, s1, ft_strncmp(s3, s1, 4));
	printf("%s, %s (%d)\n", s2, s3, ft_strncmp(s2, s3, 5));
	printf("%s, %s (%d)\n", s1, s4, ft_strncmp(s1, s4, 3));


	printf("\n============%d===================\n", 2);
	printf("%s, %s \n", s1, s2);
	printf("%s\n", ft_strcat(s1, s2));


	printf("\n============%d===================\n", 3);
	printf("%s, %s %d\n", s3, s4, 3);
	printf("%s\n", ft_strncat(s3, s4, 3));
	printf("\n============%d===================\n", 4);
	char str[] = "abcdef";
	char str2[] = "cde";
	printf("%s %s\n%s\n", str, str2, ft_strstr(str, str2));
	printf("%s %s\n%s\n", str, s2, ft_strstr(str, s2));

	printf("\n============%d===================\n", 5);
	printf("%s %s %d\n", str, str2, 8);
	int a = ft_strlcat(str, str2, 8);
	printf("%s\nreturn = %d\n", str, a);

	printf("%s %s %d\n", str, str2, 12);
	a = ft_strlcat(str, str2, 12);
	printf("%s\nreturn = %d\n", str, a);

	printf("%s %s %d\n", str, str2, 3);
	a = ft_strlcat(str, str2, 3);
	printf("%s\nreturn = %d\n", str, a);
	printf("%s %s %d\n", str, str2, 0);
	a = ft_strlcat(str, str2, 0);
	printf("%s\nreturn = %d\n", str, a);
}
