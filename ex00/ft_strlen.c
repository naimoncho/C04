int ft_strlen(char *str)
{
    int aux;

    aux = 0;
    while (str[aux] != '\0')
    {
        aux++;
    }
    return (aux);
}
// int main()
// {
// 	char saludo[] = "hola cocacola";
// 	ft_putstr(saludo);
// 	return 0;
// }