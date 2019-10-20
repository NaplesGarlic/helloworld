typedef struct DataNode
{
	char* cmd;
	char* desc;
	int (*handler)(); // pointer to function
	struct DataNode *next;
} tDataNode;

tDataNode* FindCmd(tDataNode* head, char* cmd);

int ShowAllCmd(tDataNode* head);
