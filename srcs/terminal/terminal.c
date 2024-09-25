/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:38:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/09/25 15:39:30 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

void	terminal(void)
{
	char	*input;

	while (1)
	{
		input = readline(B_RED PROMPT DEFAULT);
		if (input == NULL || !ft_strcmp(input, "exit"))
		{
			printf("\nExiting shell...\n");
			break;
		}
		if (*input)
			add_history(input);
		printf("You entered: %s\n", input);
		free(input);
	}
}