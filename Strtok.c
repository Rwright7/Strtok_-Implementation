#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char* my_strtok(char* str, const char* sep, char** str_start, size_t* token_len);


int main(void)
{
		char* str_start = NULL;
		size_t token_len = 0;
		char string[] = "Names:George Joestar,Johnathan Joestar,Joseph Joestar,Jotaro Kujo,Josuke Higashikata,Giorno Giovana";
		char *header = my_strtok(string, ":",&str_start, &token_len);
		printf(" Header = '%s'\n ", header);

		char *name = NULL;
		while ((name = my_strtok(NULL, ",",&str_start, &token_len)) != NULL)
		{
			printf("%s (length: %zu)\n", name, token_len);
		}
		puts("\n");
}

char* my_strtok(char* str, const char* sep, char** str_start, size_t* token_len)
{
	if (str != NULL)
	{
		*str_start = str;
	}

	if (*str_start == NULL)
	{
		return NULL;
	}

	size_t sep_len = strspn(*str_start, sep);
	*str_start += sep_len;

	char* token = *str_start;
	if((*str_start = strpbrk(*str_start, sep)) != NULL)
	{
		**str_start = '\0';
		*str_start += 1;
	}

	*token_len = strlen(token);
	return token;
}