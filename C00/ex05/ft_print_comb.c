/*
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    mobendoa                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <mobendao@student.1337.ma           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/12 19:46:40 by marvin            #+#    #+#              #
#    Updated: 2025/07/12 19:46:40 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_comb(void)
{
	char a ='0';
	while(a<='7')
	{
	char b = a + 1;
	while(b<='8')
	{
	char c = b + 1;
	while(c<='9')
	{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if(!(a == '7' && b=='8' && c=='9' ))
{
	ft_putchar(',');
	ft_putchar(' ');
}

	c++;
}
	b++;
}
	a++;
}
}

int main ()
{
	ft_print_comb();
	return 0;
}

