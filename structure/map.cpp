#include <cstdio>
#include <cassert>
#include "map.h"

map::map(char *database){
    if (!sqlite3_open(database, &this->mapDatabase)){
        fprintf(stderr, "Database initialisation failed!");
        assert(false);
    }

}

void map::cleanup(){
    sqlite3_close(this->mapDatabase);
}