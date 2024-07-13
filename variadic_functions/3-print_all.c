#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;

	va_start(args, format);

	while (format[i] != '\0')
	{
		c = format[i];
		if (c == 'c')
		{
			char char_arg = va_arg(args, int);

			printf("%c", char_arg);
		}
		else if (c == 'i')
		{
			int int_arg = va_arg(args, int);

			printf("%d", int_arg);
		}
		else if (c == 'f')
		{
			float float_arg = va_arg(args, double);

			printf("%f", float_arg);
		}
		else if (c == 's')
		{
			char *str_arg = va_arg(args, char *);

			if (str_arg == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str_arg);
			}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
