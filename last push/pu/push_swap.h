/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:38:49 by abmoudni          #+#    #+#             */
/*   Updated: 2025/04/07 03:53:24 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	long			nbr;
	struct s_stack	*next;
}					t_stack;

t_stack				*ft_stack_new(int content);
void				ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack				*ft_process(int argc, char **argv);
void				ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
t_stack				*ft_sort_b(t_stack **stack_a);
t_stack				**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
void				ft_sort(t_stack **stack_a);
void				ft_error(void);
int					sign(int c);
int					check_error(char **argv);
int					ft_checkdup(t_stack *a);
int					ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
int					ft_case_rarb(t_stack *a, t_stack *b, int c);
int					ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int					ft_case_rrarb(t_stack *a, t_stack *b, int c);
int					ft_case_rarrb(t_stack *a, t_stack *b, int c);
int					ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int					ft_checksorted(t_stack *stack_a);
t_stack				*ft_lstlast(t_stack *lst);
int					ft_lstsize(t_stack *lst);
int					ft_min_num(t_stack *a);
int					ft_max_num(t_stack *a);
int					ft_find_num(t_stack *a, int nbr);
int					ft_find_place_b(t_stack *stack_b, int nbr_push);
int					ft_find_place_a(t_stack *stack_a, int nbr_push);
void				ft_free_stack(t_stack **lst);
void				_free(char **str);
void				ft_free_all(char **tmp, t_stack *a);
int					ft_rotate_type_ba(t_stack *a, t_stack *b);
int					ft_rotate_type_ab(t_stack *a, t_stack *b);
void				ft_rr(t_stack **a, t_stack **b);
void				ft_rrr_sub(t_stack **b);
void				ft_rrr(t_stack **a, t_stack **b);
void				ft_pb(t_stack **stack_a, t_stack **stack_b);
void				ft_rrb(t_stack **b);
void				ft_ra(t_stack **a);
void				ft_sa(t_stack **a);
void				ft_pa(t_stack **a, t_stack **b);
void				ft_rra(t_stack **a);
void				ft_ss(t_stack **a, t_stack **b);
void				ft_rb(t_stack **b);
void				ft_sb(t_stack **b);
void				ft_sort_three(t_stack **stack_a);

#endif
