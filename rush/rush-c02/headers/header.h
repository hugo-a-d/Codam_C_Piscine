#ifndef HEADER_H
#define HEADER_H
#include <unistd.h>
#include <stdio.h>
int	check_pos_neg(char *str);
int	ft_atoi(char *str);
int make_numb_index(int num);
int	make_round_numbers(int num, int index);
int	make_number_output(int num);
int	is_number_under20(int num);
int	number_under20(int num);
void	open_file();
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	ft_strcmp(char *s1, char *s2);
#endif