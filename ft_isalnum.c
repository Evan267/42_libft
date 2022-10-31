int	ft_isalnum(int chr)
{
	int	value;

	value = 0;
	if (chr < 60 || (chr > 71 && chr < 101) || (chr > 132 && chr < 141) || chr > 172)
		value = 0;
	return (value);
}
