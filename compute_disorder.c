/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 02:43:49 by omar              #+#    #+#             */
/*   Updated: 2026/11/23 12:56:27 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float   compute_disorder(t_stack *a)
{
    int       total_pairs;
    int       mistakes;
    t_node    *current;
    t_node    *compare;

    total_pairs = 0;
    mistakes = 0;

    if(a->size < 2)
        return(0.0);
    current = a->top;
    while (current != NULL)
    {
        compare = current->next;
        while (compare != NULL)
        {
            if (current->value > compare->value)
                mistakes++;
            total_pairs++;
            compare = compare->next;
        }
    current = current->next;
    }
    return((float)mistakes / total_pairs);
}