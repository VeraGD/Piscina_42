#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                i++;
        }
        return (i);
}

void    ft_putnbr(int nb, char *base)
{
        int             i;
        char    c;
	int	base_len;

	base_len = ft_strlen(base);


        i = 1;
        if (nb > -2147483648 && nb < 2147483647)
        {
                if (nb < 0)
                {
                        write(1, "-", 1);
                        nb = nb * -1;
                }
                while (nb / i >= base_len)
                        i = i * base_len;
		printf("Valor de i %d \n", i);
                while (i > 0)
                {
                        c = nb / i + '0';
			printf("C vale %c\n", c);
                        write(1, &base[nb / base_len], 1);
                        nb = nb % i;
                        i = i / base_len;
                }
        }
        else if (nb == 2147483647)
                write(1, "2147483647", 10);
        else if (nb == -2147483648)
                write(1, "-2147483648", 11);
}

int main(void)
{
	ft_putnbr(1386, "0123456789ABCDEF");
}
