struct art_entry_cache {
	char valid;
	int id;
	char* name;
};

void start(char* port);
void alloc(void);
void dealloc(int id);
void readId(int id);
void store(int id, char* art);
void infotab(void);
void closeConnection(void);
