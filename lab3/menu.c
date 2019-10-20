#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linklist.h"

int Help();
int Quit();

int const CMD_MAX_LEN = 128;
int const DESC_LEN = 1024;
int const CMD_NUM = 10;

static tDataNode head[] =
{
	{"help", "This is help!\n", Help, &head[1]},
	{"version", "Version: v0.1.0\n", NULL, &head[2]}, // no command to execute
	{"quit", "Goodbye!\n", Quit, NULL}
};

int main()
{
	ShowAllCmd(head);
	while(1)
	{
		char cmd[CMD_MAX_LEN];
		printf("new command: >");
		scanf("%s", cmd);
		tDataNode *p = FindCmd(head, cmd);
		if (p == NULL)
		{
			printf("Error: unknown command!\n");
			continue;
		}
		else if (strcmp(cmd, p->cmd) == 0) // in case of incorrect FindCmd() :)
		{
			printf("%s - %s\n", p->cmd, p->desc);
			if (p->handler != NULL)
			{
				p->handler();
			}
		}
	}
	return 0;
}

int Help()
{
	ShowAllCmd(head);
	return 0;
}

int Quit()
{
	exit(0);
	return 0;
}
