void ft_putchar(char c)
void ft_print_comb()
{
	char ch;
	char ch1;
	char ch2;

	ch = '0';
	ch1 = '1';
	ch2 = '2';

	while (ch<= '7')
	{
		while (ch1 <= '8')
		{ 
			while (ch2<= '9')
			{
				if (ch != ch1) && (ch!= ch2) && (ch1 != ch2)
				{
				 ft_putchar(ch);
					ft_putchar(ch1);
					ft_putchar(ch2);
					ft_putchar(',');
				}
				ch2++;
			}
			ch1++;
			ch2 = ch;}
	}

}
