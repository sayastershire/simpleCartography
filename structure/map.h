#include <sqlite3.h>

class map {
    private:
        sqlite3 *mapDatabase;
        double *adjacencyList;  // to be redefined later in a construtor
        char **name;
    public:
        map(char*);
        void cleanup();
};