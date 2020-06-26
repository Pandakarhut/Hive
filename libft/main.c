
/*

------------------------------ft_strrchr.c-------------------------------------
#include <stdio.h>
#include <string.h>

int   main ()
{
   int len;
   const char s[] = "www.hive.fi";
   const char c = '.';
   char *ret;
 
   ret = ft_strrchr(s, c);
 
   printf("The character after |%c| is - |%s|\n", c, ret);
   
   return(0);
}

------------------------------ft_isalpha.c-------------------------------------
#include <stdio.h>

int		main()
{
	int a;
	int b;

	a = 123;
	b = 'adc';

	printf("%d", ft_isalpha(a));
	printf("%d", ft_isalpha(b));

	return (0);
}