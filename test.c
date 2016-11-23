
char		*ft_itoa(int n)
{
    int				i;
    unsigned int	x;
    int				sign;
    char			*buf;
    
    buf = ft_strnew(ft_countchars(n));
    x = n;
    if ((sign = n) < 0)
        x = -n;
    i = 0;
    if (x == 0)
        buf[i++] = '0';
    while (x > 0)
    {
        buf[i++] = x % 10 + '0';
        x /= 10;
    }
    if (sign < 0)
        buf[i++] = '-';
    buf[i] = '\0';
    ft_strrev(buf);
    return (buf);
}
