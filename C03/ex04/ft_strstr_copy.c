/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtakara <dtakara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:59:05 by dtakara           #+#    #+#             */
/*   Updated: 2020/12/03 02:02:08 by dtakara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (to_find[0] == '\0') //vai conferir se agulha é nula
        return (str);	//se for nula, vai retornar o palheiro
    i = 0;
    while (str[i] != '\0') //percorrer o palheiro
    {
        j = 0;
        while (to_find[j] != '\0') //enquanto a agulha for diferente de nulo
        {
            if (str[i + j] == to_find[j]) //se a posição que ele está no palheiro é igual ao conteúdo da posição da agulha i= posição do palheiro que ele começa a verificar e j = posição da agulha
            {
                j++; //se for verdadeiro, ele soma 1 em j
            }
            else
                break ; //se não, sai da função
        }
        if (to_find[j] == '\0') //se chegou até aqui é pq acabou a string da agulha e foi totalmente encontrada no palheiro
        {
            return (str + i); //daí retorna o palheiro a partir do momento em que vc achou a agulha(i)
        }
        i++; //saindo da função, ele adiciona 1 ao palheiro para verificar as demais caixinhas do próprio palheiro pra ver se dá match com a agulha
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int        main(void)
{
    char string1[] = "wubba lubba dub dub z";
    char string2[] = "lubba";

    printf("%s\n", ft_strstr(string1, string2));
    printf("%s\n", strstr(string1, string2));
    return (0);
}