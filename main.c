/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 14:36:45 by ozharko           #+#    #+#             */
/*   Updated: 2017/12/29 14:36:48 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <locale.h>


// gcc choose_type_of_arg.c free_memory.c ft_printf.c ft_uintmxtoa.c fun_to_pars_key.c hamdle_d.c is_someone.c make_some_value.c prepare_string_to_print.c switch_on_flags.c switch_on_wchar_flags.c wchar_lib.c wchar_t_unicode.c work_with_arg.c work_with_c_utf_c.c work_with_d_utf_d_u_s.c work_with_wchar_s.c help.c main.c libftprintf.h libft/libft.a

int		main(void)
{
	size_t		i;
	size_t		l;

	i = 0;
	l = 0;
	int	num;
	int				num1;
	long int			numlint;
	long long int	numllint;

	numlint = 123;
	numllint = -123;
	num = 4294967295;
	num1 = 20;
	char *str = "Hello";
  char ptr_c;
  char ptr_l;
  char ptr_i;
	char c = 'K';

    char *A;

    A = "Hello";
    char a;
    a = 'a';


       // PRINTF("|%-2c|(%3d)\t|%-2c|(%3d)\t|%-2c|(%3d)", a, a, a+5,a+5,a+10,a+10);
       // PRINTF("|%-2.3c|(%3d)\t|%-2.5c|(%3d)\t|%-2.0c|(%3d)", a, a, a+5,a+5,a+10,a+10);
       // PRINTF("|%+3c|(%3d)\t|%+3c|(%3d)\t|%+c|(%3d)", a, a, a+5, a+5, a+10, a+10);
       // PRINTF("|%3.4c|(%3d)\t|%+3.4c|(%3d)\t|%.4c|(%3d)", a, a, a+5, a+5, a+10, a+10);
       // PRINTF("|%-3w|(%3w)\t|%3Z|(%3Z)\t|%Q|(%3Q)");
       // PRINTF("|%3h|\t|%3l|\t|%3hhll|\t|%3llhhllQ|\t|%3z|\t|%3j|\t|%3J|");
       // PRINTF("|%-3c|\t|%3c|\t|%c|\t|%-03c|\t|%03c|\t|%.c|\t|%.5c|\t|%.C|\t|%.5C|", 0,0,0,0,0,0,0,0,0);




    // ft_printf("|%-2c|(%3d)\t|%-2c|(%3d)\t|%-2c|(%3d)", a, a, a+5,a+5,a+10,a+10);
    // printf("\n");
    //    printf("|%-2c|(%3d)\t|%-2c|(%3d)\t|%-2c|(%3d)", a, a, a+5,a+5,a+10,a+10);
    // printf("\n");
    // printf("\n");

    // ft_printf("|%-2.3c|(%3d)\t|%-2.5c|(%3d)\t|%-2.0c|(%3d)", a, a, a+5,a+5,a+10,a+10);
    // printf("\n");
    //    printf("|%-2.3c|(%3d)\t|%-2.5c|(%3d)\t|%-2.0c|(%3d)", a, a, a+5,a+5,a+10,a+10);
    // printf("\n");
    // printf("\n");

//    ft_printf("{%s}", 0);
//    printf("\n");
//    printf("{%s}", 0);
//    printf("\n");



    
   //  ft_printf("�\n");
   // printf("\n");
   //    printf("�");
   // printf("\n");

       ft_printf("|%3hhll|\t|%3llhhllQ|");
    printf("\n");
       printf("|%3hhll|\t|%3llhhllQ|");
    printf("\n");
    printf("\n");

 //    printf("[STRING WITH '-+10ll' MINUS PLUS ARGUMENT AND WIDTH]\n");
 // ft_printf("This is a simple test [%-+10lld] qwerty\n", numllint);
 //    printf("This is a simple test [%-+10lld] qwerty\n", numllint);
 //    printf("\n");


    // ft_printf("|%-3w|(%3w)\t|%3Z|(%3Z)\t|%Q|(%3Q)");
    // printf("\n");
    //    printf("|%-3w|(%3w)\t|%3Z|(%3Z)\t|%Q|(%3Q)");
    // printf("\n");
    // printf("\n");

    // ft_printf("|%3h|\t|%3l|\t|%3hhll|\t|%3llhhllQ|\t|%3z|\t|%3j|\t|%3J|");
    // printf("\n");
    //    printf("|%3h|\t|%3l|\t|%3hhll|\t|%3llhhllQ|\t|%3z|\t|%3j|\t|%3J|");
    // printf("\n");
    // printf("\n");

    // ft_printf("|%5.3s|\t\t|%3.5s|\t|%7s|\t|%7.3s|",A, A,A,NULL);
    // printf("\n");
    //    printf("|%5.3s|\t\t|%3.5s|\t|%7s|\t|%7.3s|",A, A,A,NULL);
    // printf("\n");
    // printf("\n");

    // ft_printf("|%-3c|\t|%3c|\t|%c|\t|%-03c|\t|%03c|\t|%.c|\t|%.5c|\t|%.C|\t|%.5C|", 0,0,0,0,0,0,0,0,0);
    // printf("\n");
    //    printf("|%-3c|\t|%3c|\t|%c|\t|%-03c|\t|%03c|\t|%.c|\t|%.5c|\t|%.C|\t|%.5C|", 0,0,0,0,0,0,0,0,0);
    // printf("\n");
    // printf("\n");
//    setlocale(LC_ALL, "");
//    ft_printf("my - %4S\n", L"😀😀😀😀😀😀");
//    printf("or - %4S\n", L"😀😀😀😀😀😀");
//    ft_printf("my - [%-30S]\n", L"😀😀😀😀😀😀");
//    printf("or - [%-30S]\n", L"😀😀😀😀😀😀");
//    ft_printf("my - %4.S\n", L"😀😀😀😀😀😀");
//    printf("or - %4.S\n", L"😀😀😀😀😀😀");
//
//    printf("%4S\n", L"我是一只猫。");
//    ft_printf("%4S\n", L"我是一只猫。");
//
//    printf("%d\n", printf("%4S\n", 0));
//    printf("%d\n", ft_printf("%4S\n", 0));
//
//
//    printf("@moulitest: %d %d\n", 42, 42);
//    ft_printf("@moulitest: %d %d\n", 42, 42);
//
//    printf("@moulitest: %d %d\n", 042, 042);
//    ft_printf("@moulitest: %d %d\n", 042, 042);
//
//    printf("@moulitest: %d\n", 0);
//    ft_printf("@moulitest: %d\n", 0);
//    system("leacks a.out");

//    ft_printf("%lD, %lD", 0, USHRT_MAX);
//    printf("\n");
//    printf("%lD, %lD", 0, USHRT_MAX);
//    printf("\n");
//    ft_printf("%llD, %llD", 0, USHRT_MAX);
//    printf("\n");
//    printf("%llD, %llD", 0, USHRT_MAX);
//    printf("\n");
//    ft_printf("%hD, %hD", 0, USHRT_MAX);
//    printf("\n");
//    printf("%hD, %hD", 0, USHRT_MAX);
//    printf("\n");
//    ft_printf("%hhD, %hhD", 0, USHRT_MAX);
//    printf("\n");
//    printf("%hhD, %hhD", 0, USHRT_MAX);
//    printf("\n");
//    ft_printf("%jD, %jD", 0, USHRT_MAX);
//    printf("\n");
//    printf("%jD, %jD", 0, USHRT_MAX);
//    printf("\n");

//
//	   printf("[STRING WITH '-+10ll' MINUS PLUS ARGUMENT AND WIDTH]\n");
//	ft_printf("This is a simple test [%-10llD] qwerty\n", 18446744073709551111);
//	   printf("This is a simple test [%-10llD] qwerty\n", 18446744073709551111);
//	   printf("\n");


// 	   printf("[[****	TEST d && D	  ****]]\n");
// 	   printf("\n");

// 	   printf("[SIMPLE STRING]\n");
// 	ft_printf("This is a simple test \n");
// 	   printf("This is a simple test \n");
// 	   printf("\n");

// 	   printf("[EMPTY STRING]\n");
// 	ft_printf("\n");
// 	   printf("\n");

// 	   // printf("[STRING ONLY ARGUMENT]\n");
// 	i = printf("\nlength = [%d]", ft_printf("{%.*s}", 5, "42"));
// 	printf("\n");
// 	l =    printf("\nlength = [%d]", printf("{%.*s}", 5, "42"));
// 	printf("\n");

// 						ft_printf("{%3c}", 0);
// 						printf("\n");

// 						printf("{%3c}", 0);
// 						printf("\n");

// 	printf("70_precision_for_diu.spec.c\n");
// 						ft_printf("%.u, %.0u", 0, 0);
// 						printf("\n");
// 						printf("%.u, %.0u", 0, 0);
// 						printf("\n");

// 	printf("92_incomptbl_values_oOxX.spec\n");
// 	printf("\n");

// 						printf("bonus_01_wildcard.spec.c\n");
// 						printf("\n");
// 						ft_printf("{%*c}", 0, 0);
// 						printf("\n");
// 						printf("{%*c}", 0, 0);
// 						printf("\n");
// 						ft_printf("{%*c}", -15, 0);
// 						printf("\n");
// 						printf("{%*c}", -15, 0);
// 						printf("\n");

// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	// printf("\n");
// 	// printf("%s\n", );
// 	l =    printf("\nlength = [%d]", ft_printf("{%*d}", 5, 42));
// 	printf("\n");
// 	l =    printf("\nlength = [%d]", printf("{%*d}", 5, 42));
// 	printf("\n");
// 	l =    printf("\nlength = [%-d]", ft_printf("{%-*d}", -5, 42));
// 	printf("\n");
// 	l =    printf("\nlength = [%-d]", printf("{%-*d}", -5, 42));
// 	printf("\n");
// 	l =    printf("\nlength = [%-d]", ft_printf("{%-*d}", 5, 42));
// 	printf("\n");
// 	l =    printf("\nlength = [%-d]", printf("{%-*d}", 5, 42));
// 	printf("\n");
// 	   printf("\n");
// 	   printf("i = [%zu] j = [%zu]\n", i, l);

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%d] qwerty\n", num1);
// 	   printf("This is a simple test [%d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0d] qwerty\n", num);
// 	   printf("This is a simple test  [%0d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0d] qwerty\n", num1);
// 	   printf("This is a simple test  [%0d] qwerty\n", num1);
// 	   printf("\n");


// 	   printf("[STRING WITH ' ' SPACE ARGUMENT]\n");
// 	ft_printf("This is a simple test  [% d] qwerty\n", num);
// 	   printf("This is a simple test  [% d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' ' SPACE ARGUMENT]\n");
// 	ft_printf("This is a simple test  [% d] qwerty\n", num1);
// 	   printf("This is a simple test  [% d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '+' PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%+d] qwerty\n", num);
// 	   printf("This is a simple test [%+d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '+' PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%+d] qwerty\n", num1);
// 	   printf("This is a simple test [%+d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-d] qwerty\n", num);
// 	   printf("This is a simple test [%-d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-d] qwerty\n", num1);
// 	   printf("This is a simple test [%-d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-+d] qwerty\n", num);
// 	   printf("This is a simple test [%-+d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-+d] qwerty\n", num1);
// 	   printf("This is a simple test [%-+d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("This is a simple test [% 0d] qwerty\n", num);
// 	   printf("This is a simple test [% 0d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("This is a simple test [% 0d] qwerty\n", num1);
// 	   printf("This is a simple test [% 0d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10d] qwerty\n", num);
// 	   printf("This is a simple test [%-10d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10d] qwerty\n", num1);
// 	   printf("This is a simple test [%-10d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+10ld] qwerty\n", numlint);
// 	   printf("This is a simple test [%-+10ld] qwerty\n", numlint);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+10lld] qwerty\n", numllint);
// 	   printf("This is a simple test [%-+10lld] qwerty\n", numllint);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 10' SPACE ZERO precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [% 10d]  qwerty\n", num);
// 	   printf("This is a simple test [% 10d]  qwerty\n", num);


// 	   printf("[STRING WITH ' 10' SPACE ZERO precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [% 10d]  qwerty\n", num1);
// 	   printf("This is a simple test [% 10d]  qwerty\n", num1);

// 	   printf("[STRING WITH !!!!!!!'+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+010d] qwerty\n", num);
// 	   printf("This is a simple test [%+010d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH !!!!!!!'+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+010d] qwerty\n", num1);
// 	   printf("This is a simple test [%+010d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0d] qwerty\n", num);
// 	   printf("This is a simple test  [%0d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0d] qwerty\n", num1);
// 	   printf("This is a simple test  [%0d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' .5' SPACE ARGUMENT]\n");
// 	ft_printf("This is a simple test  [% .5d] qwerty\n", num);
// 	   printf("This is a simple test  [% .5d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' .5' SPACE ARGUMENT]\n");
// 	ft_printf("This is a simple test  [% .5d] qwerty\n", num1);
// 	   printf("This is a simple test  [% .5d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '+.5' PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%+.5d] qwerty\n", num);
// 	   printf("This is a simple test [%+.5d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '+.5' PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%+.5d] qwerty\n", num1);
// 	   printf("This is a simple test [%+.5d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5d] qwerty\n", num);
// 	   printf("This is a simple test [%-.5d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5d] qwerty\n", num1);
// 	   printf("This is a simple test [%-.5d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+.5' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-+.5d] qwerty\n", num);
// 	   printf("This is a simple test [%-+.5d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+.5' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-+.5d] qwerty\n", num1);
// 	   printf("This is a simple test [%-+.5d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH !!!!!!!' 0.5' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("This is a simple test [% 0.5d] qwerty\n", num);
// 	   printf("This is a simple test [% 0.5d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH !!!!!!!' 0.5' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("This is a simple test [% 0.5d] qwerty\n", num1);
// 	   printf("This is a simple test [% 0.5d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5d] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5d] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10.5' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+10.5d] qwerty\n", num);
// 	   printf("This is a simple test [%-+10.5d] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10.5' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+10.5d] qwerty\n", num1);
// 	   printf("This is a simple test [%-+10.5d] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 10.5' SPACE ZERO .5 precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [% 10.5d]  qwerty\n", num);
// 	   printf("This is a simple test [% 10.5d]  qwerty\n", num);

//    printf("[STRING WITH ' 10.5' SPACE ZERO .5 precition ARGUMENT AND WIDTH]\n");
// ft_printf("This is a simple test [% 010.5d]  qwerty\n", num1);
//    printf("This is a simple test [% 010.5d]  qwerty\n", num1);

// 	   printf("[STRING WITH !!!!!!!!'+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+010d] qwerty\n", num);
// 	   printf("This is a simple test [%+010d] qwerty\n", num);

// 	   printf("[STRING WITH !!!!!!!!'+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+010d] qwerty\n", num1);
// 	   printf("This is a simple test [%+010d] qwerty\n", num1);


// 	printf("_________________________________________________________\n");

// printf("**** WORK with * asterisk *****\n");




// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-*d] qwerty\n", 10, num);
// 	   printf("This is a simple test [%-*d] qwerty\n", 10, num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-*d] qwerty\n", 10, num1);
// 	   printf("This is a simple test [%-*d] qwerty\n", 10, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+*ld] qwerty\n", 10, numlint);
// 	   printf("This is a simple test [%-+*ld] qwerty\n", 10, numlint);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+*lld] qwerty\n", 10, numllint);
// 	   printf("This is a simple test [%-+*lld] qwerty\n", 10, numllint);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 10' SPACE ZERO precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [% *d]  qwerty\n",10, num);
// 	   printf("This is a simple test [% *d]  qwerty\n",10, num);


// 	   printf("[STRING WITH ' 10' SPACE ZERO precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [% *d]  qwerty\n",10, num1);
// 	   printf("This is a simple test [% *d]  qwerty\n",10, num1);

// 	   printf("[STRING WITH !!!!!!!'+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+0*d] qwerty\n", 10, num);
// 	   printf("This is a simple test [%+0*d] qwerty\n", 10, num);
// 	   printf("\n");

// 	   printf("[STRING WITH !!!!!!!'+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+0*d] qwerty\n", 10, num1);
// 	   printf("This is a simple test [%+0*d] qwerty\n", 10, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' .5' SPACE ARGUMENT]\n");
// 	ft_printf("This is a simple test  [% .*d] qwerty\n", 5, num);
// 	   printf("This is a simple test  [% .*d] qwerty\n", 5, num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' .5' SPACE ARGUMENT]\n");
// 	ft_printf("This is a simple test  [% .*d] qwerty\n", 5, num1);
// 	   printf("This is a simple test  [% .*d] qwerty\n", 5, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '+.5' PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%+.*d] qwerty\n", 5, num);
// 	   printf("This is a simple test [%+.*d] qwerty\n", 5, num);
// 	   printf("\n");

// 	   printf("[STRING WITH '+.5' PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%+.*d] qwerty\n", 5, num1);
// 	   printf("This is a simple test [%+.*d] qwerty\n", 5, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.*d] qwerty\n", 5, num);
// 	   printf("This is a simple test [%-.*d] qwerty\n", 5, num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.*d] qwerty\n", 5, num1);
// 	   printf("This is a simple test [%-.*d] qwerty\n", 5, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+.5' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-+.*d] qwerty\n", 5, num);
// 	   printf("This is a simple test [%-+.*d] qwerty\n", 5, num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+.5' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-+.*d] qwerty\n", 5, num1);
// 	   printf("This is a simple test [%-+.*d] qwerty\n", 5, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH !!!!!!!' 0.5' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("This is a simple test [% 0.*d] qwerty\n", 5, num);
// 	   printf("This is a simple test [% 0.*d] qwerty\n", 5, num);
// 	   printf("\n");

// 	   printf("[STRING WITH !!!!!!!' 0.5' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("This is a simple test [% 0.*d] qwerty\n", 5, num1);
// 	   printf("This is a simple test [% 0.*d] qwerty\n", 5, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-*.*d] qwerty\n", 10, 5, num);
// 	   printf("This is a simple test [%-*.*d] qwerty\n", 10, 5, num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-*.*d] qwerty\n", 10, 5, num1);
// 	   printf("This is a simple test [%-*.*d] qwerty\n", 10, 5, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10.5' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+*.*d] qwerty\n", 10, 5, num);
// 	   printf("This is a simple test [%-+*.*d] qwerty\n", 10, 5, num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10.5' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+*.*d] qwerty\n", 10, 5, num1);
// 	   printf("This is a simple test [%-+*.*d] qwerty\n", 10, 5, num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 10.5' SPACE ZERO .5 precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [% *.*d]  qwerty\n", 10, 5, num);
// 	   printf("This is a simple test [% *.*d]  qwerty\n", 10, 5, num);

//    printf("[STRING WITH ' 10.5' SPACE ZERO .5 precition ARGUMENT AND WIDTH]\n");
// ft_printf("This is a simple test [% 0*.*d]  qwerty\n", 10, 5, num1);
//    printf("This is a simple test [% 0*.*d]  qwerty\n", 10, 5, num1);

// 	   printf("[STRING WITH !!!!!!!!'+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+0*d] qwerty\n", 10, num);
// 	   printf("This is a simple test [%+0*d] qwerty\n", 10, num);

// 	   printf("[STRING WITH !!!!!!!!'+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+0*d] qwerty\n", 10, num1);
// 	   printf("This is a simple test [%+0*d] qwerty\n", 10, num1);





// 	printf("_________________________________________________________\n");
// 	   printf("[STRING big DDDDDDDDDDDDD]\n");

// 	ft_printf("This is a simple test \n");
// 	   printf("This is a simple test \n");
// 	   printf("\n");

// 	   printf("[EMPTY STRING]\n");
// 	ft_printf("\n");
// 	   printf("\n");

// 	   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%D] qwerty\n", num);
// 	   printf("This is a simple test [%D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0D] qwerty\n", num);
// 	   printf("This is a simple test  [%0D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' ' SPACE ARGUMENT]\n");
// 	ft_printf("This is a simple test  [% D] qwerty\n", num);
// 	   printf("This is a simple test  [% D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '+' PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%+D] qwerty\n", num);
// 	   printf("This is a simple test [%+D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-D] qwerty\n", num);
// 	   printf("This is a simple test [%-D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-+D] qwerty\n", num);
// 	   printf("This is a simple test [%-+D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("This is a simple test [% 0D] qwerty\n", num);
// 	   printf("This is a simple test [% 0D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10D] qwerty\n", num);
// 	   printf("This is a simple test [%-10D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10l' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+10lD] qwerty\n", numlint);
// 	   printf("This is a simple test [%-+10lD] qwerty\n", numlint);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10ll' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+10llD] qwerty\n", numllint);
// 	   printf("This is a simple test [%-+10llD] qwerty\n", numllint);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0.5' SPACE ZERO .5 precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [% 10D]  qwerty\n", num);
// 	   printf("This is a simple test [% 10D]  qwerty\n", num);

// 	   printf("[STRING WITH '+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+010D] qwerty\n", num);
// 	   printf("This is a simple test [%+010D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0D] qwerty\n", num);
// 	   printf("This is a simple test  [%0D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' .5' SPACE ARGUMENT]\n");
// 	ft_printf("This is a simple test  [% .5D] qwerty\n", num);
// 	   printf("This is a simple test  [% .5D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '+.5' PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%+.5D] qwerty\n", num);
// 	   printf("This is a simple test [%+.5D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5D] qwerty\n", num);
// 	   printf("This is a simple test [%-.5D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+.5' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-+.5D] qwerty\n", num);
// 	   printf("This is a simple test [%-+.5D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0.5' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("This is a simple test [% 0.5D] qwerty\n", num);
// 	   printf("This is a simple test [% 0.5D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5D] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-+10.5D] qwerty\n", num);
// 	   printf("This is a simple test [%-+10.5D] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0.5' SPACE ZERO .5 precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [% 10.5D]  qwerty\n", num);
// 	   printf("This is a simple test [% 10.5D]  qwerty\n", num);

// 	   printf("[STRING WITH '+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%+010D] qwerty\n", num);
// 	   printf("This is a simple test [%+010D] qwerty\n", num);

// printf("_________________________________________________________\n");
// 		   printf("[STRING big iiiiiiiiiiiiiiiii]\n");

// 	ft_printf("i - This is a simple test \n");
// 	   printf("i - This is a simple test \n");
// 	   printf("\n");

// 	   printf("[EMPTY STRING]\n");
// 	ft_printf("\n");
// 	   printf("\n");

// 	   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [%i] qwerty\n", num);
// 	   printf("i - This is a simple test [%i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("i - This is a simple test  [%0i] qwerty\n", num);
// 	   printf("i - This is a simple test  [%0i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' ' SPACE ARGUMENT]\n");
// 	ft_printf("i - This is a simple test  [% i] qwerty\n", num);
// 	   printf("i - This is a simple test  [% i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '+' PLUS ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [%+i] qwerty\n", num);
// 	   printf("i - This is a simple test [%+i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [%-i] qwerty\n", num);
// 	   printf("i - This is a simple test [%-i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [%-+i] qwerty\n", num);
// 	   printf("i - This is a simple test [%-+i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [% 0i] qwerty\n", num);
// 	   printf("i - This is a simple test [% 0i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [%-10i] qwerty\n", num);
// 	   printf("i - This is a simple test [%-10i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [%-+10li] qwerty\n", numlint);
// 	   printf("i - This is a simple test [%-+10li] qwerty\n", numlint);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [%-+10lli] qwerty\n", numllint);
// 	   printf("i - This is a simple test [%-+10lli] qwerty\n", numllint);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0.5' SPACE ZERO .5 precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [% 10i]  qwerty\n", num);
// 	   printf("i - This is a simple test [% 10i]  qwerty\n", num);

// 	   printf("[STRING WITH '+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [%+010i] qwerty\n", num);
// 	   printf("i - This is a simple test [%+010i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("i - This is a simple test  [%0i] qwerty\n", num);
// 	   printf("i - This is a simple test  [%0i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' ' SPACE ARGUMENT]\n");
// 	ft_printf("i - This is a simple test  [% .5i] qwerty\n", num);
// 	   printf("i - This is a simple test  [% .5i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '+' PLUS ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [%+.5i] qwerty\n", num);
// 	   printf("i - This is a simple test [%+.5i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [%-.5i] qwerty\n", num);
// 	   printf("i - This is a simple test [%-.5i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+' MINUS PLUS ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [%-+.5i] qwerty\n", num);
// 	   printf("i - This is a simple test [%-+.5i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0' SPACE ZERO ARGUMENT]\n");
// 	ft_printf("i - This is a simple test [% 0.5i] qwerty\n", num);
// 	   printf("i - This is a simple test [% 0.5i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [%-10.5i] qwerty\n", num);
// 	   printf("i - This is a simple test [%-10.5i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-+10' MINUS PLUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [%-+10.5i] qwerty\n", num);
// 	   printf("i - This is a simple test [%-+10.5i] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 0.5' SPACE ZERO .5 precition ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [% 10.5i]  qwerty\n", num);
// 	   printf("i - This is a simple test [% 10.5i]  qwerty\n", num);

// 	   printf("[STRING WITH '+010' PLUS ZERO ARGUMENT AND WIDTH]\n");
// 	ft_printf("i - This is a simple test [%+010i] qwerty\n", num);
// 	   printf("i - This is a simple test [%+010i] qwerty\n", num);


// printf("_________________________________________________________\n");
// 	char	*str1 = "";
// 	char	*str2 = " ";

// 	   printf("\n[[**** TEST s && S ****]]\n");
// 	   printf("\n");

// 	   printf("*** EMPTY STR ***\n");



// 	ft_printf("str1 = [%-s]\n", str1);
// 	   printf("str1 = [%-s]\n", str1);
// 	   printf("\n");

// 	ft_printf("str1 = [%.5s]\n", str1);
// 	   printf("str1 = [%.5s]\n", str1);
// 	   printf("\n");

// 	ft_printf("str1 = [%10s]\n", str1);
// 	   printf("str1 = [%10s]\n", str1);
// 	   printf("\n");

// 	ft_printf("str1 = [%10.5s]\n", str1);
// 	   printf("str1 = [%10.5s]\n", str1);
// 	   printf("\n");

// 	ft_printf("str1 = [%-10.5s]\n", str1);
// 	   printf("str1 = [%-10.5s]\n", str1);
// 	   printf("\n");
// 	   printf("\n");

// 	   printf("\n\n*** SPACE STR ***");

// 	ft_printf("str1 = [%-s]\n", str2);
// 	   printf("str1 = [%-s]\n", str2);
// 	   printf("\n");

// 	ft_printf("str1 = [%10s]\n", str2);
// 	   printf("str1 = [%10s]\n", str2);
// 	   printf("\n");

// 	ft_printf("str1 = [%.5s]\n", str2);
// 	   printf("str1 = [%.5s]\n", str2);
// 	   printf("\n");

// 	ft_printf("str1 = [%10.5s]\n", str2);
// 	   printf("str1 = [%10.5s]\n", str2);
// 	   printf("\n");

// 	ft_printf("str1 = [%10.5s]\n", str2);
// 	   printf("str1 = [%10.5s]\n", str2);
// 	   printf("\n");

// 	ft_printf("str1 = [%-10.5s]\n", str2);
// 	   printf("str1 = [%-10.5s]\n", str2);
// 	   printf("\n");
// 	   printf("\n");

// 	   printf("\n*** HELLO STR ***\n");

// 	char 	*str3;

// 	str3 = "Hello";
// 	ft_printf("str1 = [%-10s]\n", str3);
// 	   printf("str1 = [%-10s]\n", str3);
// 	   printf("\n");

// 	ft_printf("str1 = [%-s]\n", str3);
// 	   printf("str1 = [%-s]\n", str3);
// 	   printf("\n");

// 	ft_printf("str1 = [%10s]\n", str3);
// 	   printf("str1 = [%10s]\n", str3);
// 	   printf("\n");

// 	ft_printf("str1 = [%.5s]\n", str3);
// 	   printf("str1 = [%.5s]\n", str3);
// 	   printf("\n");

// 	ft_printf("str1 = [%10.5s]\n", str3);
// 	   printf("str1 = [%10.5s]\n", str3);
// 	   printf("\n");

// 	ft_printf("str1 = [%10.5s]\n", str3);
// 	   printf("str1 = [%10.5s]\n", str3);
// 	   printf("\n");

// 	ft_printf("str1 = [%-10.5s]\n", str3);
// 	   printf("str1 = [%-10.5s]\n", str3);
// // 	   printf("\n");

// 	printf("***** TYPE x *****\n\n");

// 	   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#x] qwerty\n", num);
// 	   printf("This is a simple test [%#x] qwerty\n", num);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#x] qwerty\n", num1);
// 	   printf("This is a simple test [%#x] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%#0x] qwerty\n", num);
// 	   printf("This is a simple test  [%#0x] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%#0x] qwerty\n", num1);
// 	   printf("This is a simple test  [%#0x] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#-x] qwerty\n", num);
// 	   printf("This is a simple test [%#-x] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#-x] qwerty\n", num1);
// 	   printf("This is a simple test [%#-x] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10x] qwerty\n", num);
// 	   printf("This is a simple test [%#-10x] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10x] qwerty\n", num1);
// 	   printf("This is a simple test [%#-10x] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%#0x] qwerty\n", num);
// 	   printf("This is a simple test  [%#0x] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%#0x] qwerty\n", num1);
// 	   printf("This is a simple test  [%#0x] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#-.5x] qwerty\n", num);
// 	   printf("This is a simple test [%#-.5x] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#-.5x] qwerty\n", num1);
// 	   printf("This is a simple test [%#-.5x] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10.5x] qwerty\n", num);
// 	   printf("This is a simple test [%#-10.5x] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10.5x] qwerty\n", num1);
// 	   printf("This is a simple test [%#-10.5x] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10.5x] qwerty\n", num);
// 	   printf("This is a simple test [%#-10.5x] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10.5x] qwerty\n", num1);
// 	   printf("This is a simple test [%#-10.5x] qwerty\n", num1);
// 	   printf("\n");

// 	printf("***** TYPE X *****\n\n");

// 		   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#X] qwerty\n", num);
// 	   printf("This is a simple test [%#X] qwerty\n", num);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#X] qwerty\n", num1);
// 	   printf("This is a simple test [%#X] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%#0X] qwerty\n", num);
// 	   printf("This is a simple test  [%#0X] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%#0X] qwerty\n", num1);
// 	   printf("This is a simple test  [%#0X] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#-X] qwerty\n", num);
// 	   printf("This is a simple test [%#-X] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#-X] qwerty\n", num1);
// 	   printf("This is a simple test [%#-X] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10X] qwerty\n", num);
// 	   printf("This is a simple test [%#-10X] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10X] qwerty\n", num1);
// 	   printf("This is a simple test [%#-10X] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%#0X] qwerty\n", num);
// 	   printf("This is a simple test  [%#0X] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%#0X] qwerty\n", num1);
// 	   printf("This is a simple test  [%#0X] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#-.5X] qwerty\n", num);
// 	   printf("This is a simple test [%#-.5X] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%#-.5X] qwerty\n", num1);
// 	   printf("This is a simple test [%#-.5X] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10.5X] qwerty\n", num);
// 	   printf("This is a simple test [%#-10.5X] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10.5X] qwerty\n", num1);
// 	   printf("This is a simple test [%#-10.5X] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10.5X] qwerty\n", num);
// 	   printf("This is a simple test [%#-10.5X] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%#-10.5X] qwerty\n", num1);
// 	   printf("This is a simple test [%#-10.5X] qwerty\n", num1);
// 	   printf("\n");


// 	printf("***** TYPE o *****\n\n");

// 		   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%o] qwerty\n", num);
// 	   printf("This is a simple test [%o] qwerty\n", num);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%o] qwerty\n", num1);
// 	   printf("This is a simple test [%o] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0o] qwerty\n", num);
// 	   printf("This is a simple test  [%0o] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0o] qwerty\n", num1);
// 	   printf("This is a simple test  [%0o] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-o] qwerty\n", num);
// 	   printf("This is a simple test [%-o] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-o] qwerty\n", num1);
// 	   printf("This is a simple test [%-o] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10o] qwerty\n", num);
// 	   printf("This is a simple test [%-10o] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10o] qwerty\n", num1);
// 	   printf("This is a simple test [%-10o] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0o] qwerty\n", num);
// 	   printf("This is a simple test  [%0o] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0o] qwerty\n", num1);
// 	   printf("This is a simple test  [%0o] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5o] qwerty\n", num);
// 	   printf("This is a simple test [%-.5o] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5o] qwerty\n", num1);
// 	   printf("This is a simple test [%-.5o] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5o] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5o] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5o] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5o] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5o] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5o] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5o] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5o] qwerty\n", num1);
// 	   printf("\n");


// 	printf("***** TYPE O *****\n\n");

// 		   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%O] qwerty\n", num);
// 	   printf("This is a simple test [%O] qwerty\n", num);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%O] qwerty\n", num1);
// 	   printf("This is a simple test [%O] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0O] qwerty\n", num);
// 	   printf("This is a simple test  [%0O] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0O] qwerty\n", num1);
// 	   printf("This is a simple test  [%0O] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-O] qwerty\n", num);
// 	   printf("This is a simple test [%-O] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-O] qwerty\n", num1);
// 	   printf("This is a simple test [%-O] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10O] qwerty\n", num);
// 	   printf("This is a simple test [%-10O] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10O] qwerty\n", num1);
// 	   printf("This is a simple test [%-10O] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0O] qwerty\n", num);
// 	   printf("This is a simple test  [%0O] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0O] qwerty\n", num1);
// 	   printf("This is a simple test  [%0O] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5O] qwerty\n", num);
// 	   printf("This is a simple test [%-.5O] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5O] qwerty\n", num1);
// 	   printf("This is a simple test [%-.5O] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5O] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5O] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5O] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5O] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5O] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5O] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5O] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5O] qwerty\n", num1);
// 	   printf("\n");

// 	printf("***** TYPE u *****\n\n");

// 		   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%u] qwerty\n", num);
// 	   printf("This is a simple test [%u] qwerty\n", num);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%u] qwerty\n", num1);
// 	   printf("This is a simple test [%u] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0u] qwerty\n", num);
// 	   printf("This is a simple test  [%0u] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0u] qwerty\n", num1);
// 	   printf("This is a simple test  [%0u] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-u] qwerty\n", num);
// 	   printf("This is a simple test [%-u] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-u] qwerty\n", num1);
// 	   printf("This is a simple test [%-u] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10u] qwerty\n", num);
// 	   printf("This is a simple test [%-10u] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10u] qwerty\n", num1);
// 	   printf("This is a simple test [%-10u] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0u] qwerty\n", num);
// 	   printf("This is a simple test  [%0u] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0u] qwerty\n", num1);
// 	   printf("This is a simple test  [%0u] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5u] qwerty\n", num);
// 	   printf("This is a simple test [%-.5u] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5u] qwerty\n", num1);
// 	   printf("This is a simple test [%-.5u] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5u] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5u] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5u] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5u] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5u] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5u] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5u] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5u] qwerty\n", num1);
// 	   printf("\n");

// 	printf("***** TYPE U *****\n\n");

// 		   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%U] qwerty\n", num);
// 	   printf("This is a simple test [%U] qwerty\n", num);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%U] qwerty\n", num1);
// 	   printf("This is a simple test [%U] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0U] qwerty\n", num);
// 	   printf("This is a simple test  [%0U] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0U] qwerty\n", num1);
// 	   printf("This is a simple test  [%0U] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-U] qwerty\n", num);
// 	   printf("This is a simple test [%-U] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-U] qwerty\n", num1);
// 	   printf("This is a simple test [%-U] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10U] qwerty\n", num);
// 	   printf("This is a simple test [%-10U] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10U] qwerty\n", num1);
// 	   printf("This is a simple test [%-10U] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0U] qwerty\n", num);
// 	   printf("This is a simple test  [%0U] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '0' ARGUMENT]\n");
// 	ft_printf("This is a simple test  [%0U] qwerty\n", num1);
// 	   printf("This is a simple test  [%0U] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5U] qwerty\n", num);
// 	   printf("This is a simple test [%-.5U] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-.5' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-.5U] qwerty\n", num1);
// 	   printf("This is a simple test [%-.5U] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5U] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5U] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH '-20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5U] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5U] qwerty\n", num1);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5U] qwerty\n", num);
// 	   printf("This is a simple test [%-10.5U] qwerty\n", num);
// 	   printf("\n");

// 	   printf("[STRING WITH ' 20.5' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10.5U] qwerty\n", num1);
// 	   printf("This is a simple test [%-10.5U] qwerty\n", num1);
// 	   printf("\n");

// 	printf("***** TYPE c *****\n\n");


// 	c = 'W';
// 		   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%c] qwerty\n", c);
// 	   printf("This is a simple test [%c] qwerty\n", c);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%c] qwerty\n", c);
// 	   printf("This is a simple test [%c] qwerty\n", c);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-c] qwerty\n", c);
// 	   printf("This is a simple test [%-c] qwerty\n", c);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-c] qwerty\n", c);
// 	   printf("This is a simple test [%-c] qwerty\n", c);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10c] qwerty\n", c);
// 	   printf("This is a simple test [%-10c] qwerty\n", c);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10c] qwerty\n", c);
// 	   printf("This is a simple test [%-10c] qwerty\n", c);
// 	   printf("\n");

// 	printf("***** TYPE C *****\n\n");
// 	char	*c1;
// 	char 	c2;

// 	c1 = "w";
// 	c2 = 'F';
// 		   printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%C] qwerty\n", c2);
// 	   printf("This is a simple test [%C] qwerty\n", c2);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%C] qwerty\n", c2);
// 	   printf("This is a simple test [%C] qwerty\n", c2);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-C] qwerty\n", c2);
// 	   printf("This is a simple test [%-C] qwerty\n", c2);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-C] qwerty\n", c2);
// 	   printf("This is a simple test [%-C] qwerty\n", c2);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10C] qwerty\n", c2);
// 	   printf("This is a simple test [%-10C] qwerty\n", c2);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10C] qwerty\n", c2);
// 	   printf("This is a simple test [%-10C] qwerty\n", c2);

// 			   printf("[STRING ONLY ARGUMENT]\n");

// 	   printf("***** TYPE p *****\n\n");
// 	ft_printf("This is a simple test [%p] qwerty\n", c1);
// 	   printf("This is a simple test [%p] qwerty\n", c1);
// 	   printf("\n");

// 	   	printf("[STRING ONLY ARGUMENT]\n");
// 	ft_printf("This is a simple test [%p] qwerty\n", c1);
// 	   printf("This is a simple test [%p] qwerty\n", c1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-p] qwerty\n", c1);
// 	   printf("This is a simple test [%-p] qwerty\n", c1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-' MINUS ARGUMENT]\n");
// 	ft_printf("This is a simple test [%-p] qwerty\n", c1);
// 	   printf("This is a simple test [%-p] qwerty\n", c1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10p] qwerty\n", c1);
// 	   printf("This is a simple test [%-10p] qwerty\n", c1);
// 	   printf("\n");

// 	   printf("[STRING WITH '-10' MINUS ARGUMENT AND WIDTH]\n");
// 	ft_printf("This is a simple test [%-10p] qwerty\n", c1);
// 	   printf("This is a simple test [%-10p] qwerty\n", c1);
// 	   printf("\n");
	return (0);
}