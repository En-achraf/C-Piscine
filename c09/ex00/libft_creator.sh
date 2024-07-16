#!/bin/sh

#Compiler
gcc -c *.c
#Compiler Msg 
echo "ft_putchar.o creating"
echo "ft_putstr.o creating"
echo "ft_swap.o creating"
echo "ft_strcmp.o creating"
echo "ft_strlen.o creating"
#create the archive libft
ar r libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
#Libft. Msg
echo "lbft.a is creating"
#linking the libft.a
#Remove The Object
rm -rf *.o
#Object Remove Msg
echo "ft_putchar.o removing"
echo "ft_putstr.o removing"
echo "ft_swap.o removing"
echo "ft_strcmp.o removing"
echo "ft_strlen.o removing"