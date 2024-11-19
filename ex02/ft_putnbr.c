#include <unistd.h>

void ft_recursive(int n)
{
    char char_n;
    int num;

    num = n;
    if (num / 10 != 0)
    {
        ft_recursive(num / 10);
    }
    char_n = 48 + (n % 10);
    write(1, &char_n, 1);
}

void ft_putnbr(int nb)
{
    int neg;

    if ( nb == -2147483648)
    {
        write(1, "-2147483648", 12);
    }
    if (nb < 0)
    {
        neg = -nb;
        write(1, "-", 1);
        ft_recursive(neg);
    }
    else
        ft_recursive(nb);
}
// int main()
// {
//         ft_putnbr(42);
//         ft_putnbr(5603);
//         ft_putnbr(-560);
//         ft_putnbr(0);
//         ft_putnbr(-2147483648);
//         return 0;
// }