#include <stdlib.h>

char *_getEnv(char *var, char **env)
{

	char **enviroment;
	char *Value_pos;
	size_t len = 0;

	len = _strlen(var);

	for (enviroment = env; *env != NULL; env++)
	{
		if (_strncmp(var, *env, len) == 0)
		{
			Value_pos = _strchr(*env, '=');
			Value_pos++;
			break;
		}
	*enviroment = *env;
	}
return (Value_pos);
}