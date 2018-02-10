/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 14:36:45 by ozharko           #+#    #+#             */
/*   Updated: 2017/12/29 14:36:48 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <wchar.h>

typedef struct	s_pars
{
	char		**pars_key;
	char		*zero_small_x;
	char		*zero_big_x;
	char		flag_hash;
	char		flag_minus;
	char		flag_zero;
	char		flag_plus;
	char		flag_space;
	int			minus;
	size_t		precition;
	size_t		width;
	int			precition_on;
	char		*tern_key;
	char		*str;
	int			ll;
	int			l;
	int			hh;
	int			h;
	int			j;
	int			z;
	int			counter;
	int			dont_print;
}				t_pars;

int				ft_printf(const char *restrict format, ...);
int				is_type(char key);
int				is_flags(char key);
int				is_length(char key);
int				is_width(char key);
int				is_precition(char key);
void			pars_key_alloc_zero(t_pars *stc, size_t len);
char			*ft_strnewuintmx(uintmax_t size);
uintmax_t		ft_strlenuintmx(const char *s);
int				fun_pars_key_flags(char *key, int iter, t_pars *stc);
int				fun_pars_key_width(char *k, int s, t_pars *st, va_list ap);
int				fun_pars_key_pr(char *key, int start, t_pars *stc, va_list ap);
int				fun_pars_key_length(char *key, int iter, t_pars *stc);
void			fun_pars_key_type(char *key, int start, t_pars *stc);
void			print_arg(t_pars *stc, va_list ap);
void			choose_type_of_arg(t_pars *stc, va_list ap, int *len);
void			work_with_arg_d(t_pars *stc, va_list ap, int *len);
void			work_with_arg_utf_d(t_pars *stc, va_list ap, int *len);
void			work_with_arg_s(t_pars *stc, va_list ap, int *len);
void			work_with_arg_utf_s(t_pars *stc, va_list ap, int *len);
void			work_with_arg_x(t_pars *stc, va_list ap, int *len);
void			work_with_arg_c(t_pars *stc, va_list ap, int *len);
void			work_with_arg_utf_c(t_pars *stc, va_list ap, int *len);
void			work_with_arg_u(t_pars *stc, va_list ap, int *len);
void			work_with_arg_p(t_pars *stc, va_list ap, int *len);
void			work_with_arg_o(t_pars *stc, va_list ap, int *len);
void			work_with_arg_percent(t_pars *stc, int *len);
void			ft_putstr_count(char *s, int *len);
char			*ft_space(char *space, size_t len);
wchar_t			*ft_space_wchar_t(wchar_t *space, size_t len);
char			*hw_mch_sp(char *r, t_pars *stc, size_t *w);
char			*how_much_spases_x(char *r, t_pars *stc, size_t *w);
char			*how_much_spases_o(char *r, t_pars *stc, size_t *w);
wchar_t			*how_much_spases_s(wchar_t *r, t_pars *stc, size_t *w);
wchar_t			*sp_utf_s(wchar_t *r, t_pars *stc, size_t *w, unsigned s);
char			*hw_mch_sp_c(char c, t_pars *stc, size_t *width);
char			*how_much_spases_utf_c(unsigned n, t_pars *s, size_t *w);
char			*ft_num_zero(char *str);
char			*ft_add_prec(char *result, t_pars *stc);
char			*ft_add_prec_s(char *result, t_pars *stc);
wchar_t			*ft_add_prec_s_wchar_t(wchar_t *result, t_pars *stc);
char			*type_of_int(t_pars *stc, va_list ap);
char			*type_of_unsigned_int(va_list ap, t_pars *stc);
char			*type_of_unsigned_int_u(va_list ap, t_pars *stc);
char			*type_of_base_o(t_pars *stc, va_list ap);
char			*type_of_base_x(t_pars *stc, va_list ap);
char			*type_of_u(va_list ap);
char			*type_of_base_p(va_list ap);
char			*ft_uintmxtoa(uintmax_t n);
char			*ft_itoa_base_ux(intmax_t val, size_t base);
char			*ft_itoa_base_ux_size_t(unsigned int value, unsigned int base);
int				is_flags(char key);
int				is_width(char key);
int				is_precition(char key);
int				is_len(char key);
int				is_type(char key);
int				test_wchar_fun(unsigned int v, int size);
int				ft_count_bits(unsigned int bit);
size_t			ft_strlen_wchar_t(wchar_t *s);
wchar_t			*ft_strnew_wchar_t(size_t size);
wchar_t			*ft_strsub_wchar_t(wchar_t *str, unsigned start, size_t len);
wchar_t			*ft_strdup_wchar_t(wchar_t *str);
wchar_t			*ft_strjoin_wchar_t(wchar_t *s1, wchar_t *s2);
void			free_work_with_arg(char *result, char *str);
void			free_work_with_arg_utf_s(wchar_t *str, wchar_t *result);
void			free_work_with_arg_s(char *str, char *result);
char			*str1_free_str2(char *result, char *str);
char			*str2_free_str1(char *str, char *result);
void			p1(unsigned int v, unsigned char octet);
void			p2(unsigned char *o, unsigned v, unsigned char c, unsigned *m);
void			p3(unsigned char *o, unsigned v, unsigned char c, unsigned *m);
void			p4(unsigned char *o, unsigned v, unsigned char c, unsigned *m);
int				ft_num_len(size_t n);
char			*ft_uintmxtoa(size_t n);
int				my_len(intmax_t value, size_t base);
char			*ft_itoa_base_ux(intmax_t value, size_t base);
char			*ft_itoa_base_ux_size_t(unsigned int value, unsigned int base);
char			*ft_itoa_base_ux_utf_d(long long int value, int base);
int				my_length(intmax_t value, size_t base);
int				my_length_utf_d(long long int value, int base);
intmax_t		ch_val_of_int(t_pars *stc, va_list ap);
char			*find_value_1(char *result, t_pars *stc, char *str);
char			*find_value_2(char *result, t_pars *stc, char *str);
wchar_t			*invisible_str(wchar_t *r);
char			*ft_strdup_free(char *res, char *str);

#endif
