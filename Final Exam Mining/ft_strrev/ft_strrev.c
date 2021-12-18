char	*ft_strrev(char *str)
{
	int c;
	int i;
	char tmp;

	c = 0;
	i = 0;
	while(str[c] != '\0')
		c++;
	c--;
	while(i < c / 2)
	{
		tmp = str[i];
		str[i] = str[c - 1 - i];
		str[c - 1 - i] = tmp;
		i++;
	}
	return (str);
}
