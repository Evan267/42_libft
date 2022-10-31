int	ft_strlen(char *str)
{
	int	value;

	value = 0;
	while (str[value])
		value++;
	return (value);
}
