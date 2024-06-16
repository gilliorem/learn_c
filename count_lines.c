#include <stdio.h>

void count_blank_line_tab()
{

	int c, blank, new_line, new_tab;

	blank = 0;
	new_line = 0;
	new_tab = 0;

	while ((c = getchar()) != EOF)
	{
		if(c == '\n')
			++new_line;
		else if (c == '\t')
			++new_tab;
		else if (c == 32)
			++blank;
	}
	printf("blanks :%d\n lines:%d\n tabs:%d\n", blank, new_line, new_tab);
}

void replace_all_blanks_by_one_blank()
{
	int c;
	while ((c = getchar()) != EOF)
		{
			putchar(c);
			if (c == ' '){
				while ((c = getchar()) == ' ')
					;
				putchar(c);
			}
		}
}

void replace_hidden_char()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
}

int main()
{
//	replace_hidden_char();
	printf("cou\bcou\n");
}
