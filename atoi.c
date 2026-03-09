int ft_isspace(char c)
{
    return (c == ' ' || c == '\t');
}

int ft_isnumber(int nb)
{
    if (nb >= '0' && nb <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    while(ft_isspace(str[i]))
        i++;
    while(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }   
    while(ft_isnumber(str[i]))
    {
        result = str[i] * 10 + (str[i] - 48);
        i++;
    }
    return (sign * result);
}
