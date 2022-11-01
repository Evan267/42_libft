size_t	ft_strlen(const char *str)
{
	size_t	value;

	value = 0;
	while (str[value])
		value++;
	return (value);
}
