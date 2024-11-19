void ft_putnbr_base(int nbr, char *base)
{
	int len;
	int i;
	int	neg;

	i = 0;
	neg = 0;
	if (nbr < 0)
	{
		neg = 1;
		nbr = -nbr;
	}
	if ()
}

// int main() 
// {
//     int num = -255;
//     const char *base_decimal = "0123456789";
//     const char *base_binari = "01";
//     const char *base_hexadecimal = "0123456789ABCDEF";
//     const char *base_octal = "01234567";
	
//     printf("Decimal: ");
//     ft_putnbr_base(num, base_decimal);
//     printf("\n");
	
//     printf("Binari: ");
//     ft_putnbr_base(num, base_binari);
//     printf("\n");
	
//     printf("Hexadecimal: ");
//     ft_putnbr_base(num, base_hexadecimal);
//     printf("\n");
	
//     printf("Octal: ");
//     ft_putnbr_base(num, base_octal);
//     printf("\n");
	
//     return 0;
// }