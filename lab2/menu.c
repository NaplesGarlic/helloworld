#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Init();
void Print(); // format print to screen
void Help();
void Version();
void Quit();
void OpenFile();
void SaveFile();
void CloseFile();
void ShowFile();
void Set();
void Error();

char fileName[64];

int main()
{
	char cmd[64];
	Init();
	while(1)
	{
		scanf("%s", cmd);
		if (!strcmp(cmd, "help"))
		{
			Help();
		}
		else if (!strcmp(cmd, "version"))
		{
			Version();
		}
		else if (!strcmp(cmd, "quit"))
		{
			Quit();
		}
		else if (!strcmp(cmd, "openfile"))
		{
			OpenFile();
		}
		else if (!strcmp(cmd, "savefile"))
		{
			SaveFile();
		}
		else if (!strcmp(cmd, "closefile"))
		{
			CloseFile();
		}
		else if (!strcmp(cmd, "showfile"))
		{
			ShowFile();
		}
		else if (!strcmp(cmd, "set"))
		{
			Set();
		}
		else
		{
			Error();
		}
	}
	
	return 0;
}

void Init()
{
	Print();
	printf("| * -help                     |\n");
	printf("| * -set                      |\n");
	printf("| * -version                  |\n");
	printf("| * -quit                     |\n");
	printf("|                             |\n");
	printf("| * -openfile                 |\n");
	printf("| * -savefile                 |\n");
	printf("| * -closefile                |\n");
	printf("| * -showfile                 |\n");
	printf("|                             |\n");
	printf("| * * * * * * * * * * * * * * |\n");
}

void Print()
{
	printf("|* * * * * * MENU * * * * * * |\n");
	printf("|                             |\n");
}

void Help()
{
	Print();
	printf("| This is help!               |\n");
}

void Version()
{
	Print();
	printf("| Version: v-0.0.1            |\n");
}

void Quit()
{
	Print();
	printf("| Goodbye!                    |\n");
	exit(0);
}

void OpenFile()
{
	Print();
	printf("| FileName:                   |\n");
	scanf("%s", fileName);
	printf("| File %s is opened!\n", fileName);
}

void SaveFile()
{
	Print();
	printf("| File %s is saved!\n", fileName);
}

void CloseFile()
{
	Print();
	printf("| File %s is closed!\n", fileName);
}

void ShowFile()
{
	Print();
	printf("| File %s is shown!\n", fileName);
}

void Set()
{
	Print();
	printf("| Set!                        |\n");
}

void Error()
{
	Print();
	printf("| Error: unknown command!     |\n");
}


