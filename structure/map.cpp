#include <cstdio>
#include <cassert>
#include <fstream>
#include "map.h"

using std::ifstream;

map::map(char *database, char *adjacencyFile){
    adjacencyList = map::parseAdjacencyList(adjacencyFile);
    //...
}

double **map::parseAdjacencyList(char *adjacencyList){
    // ---------- Get the whole file (including \ns). ----------
    ifstream adjacencyFile (adjacencyList);
    adjacencyFile.seekg(0, std::ios::end);  // Go to end of the file
    int length = adjacencyFile.tellg();
    char *buffer = new char[length];
    adjacencyFile.seekg(0, std::ios::beg);
    adjacencyFile.read(buffer, length);

    // ---------- Parse to a proper char arrays ----------
    // Initialising adjacencyLine dynamically
    double **adjacencyLine = new double*[NODE_COUNT];
    for (int i = 0; i < NODE_COUNT; i++){
        adjacencyLine[i] = new double[NODE_COUNT];
    }
    int lineCount{}, pointer{};
    char *bufferPointer = buffer;
    // i = buffer pointer, pointer = line pointer
    for (int i = 0; *bufferPointer != 0; i++){
        switch(*bufferPointer){
            case '\n':
                ++lineCount;
                pointer = 0;
                break;
            case ',':
                break;
            case '0':
                adjacencyLine[lineCount][pointer++] = 0;
                break;
            case '1':
                adjacencyLine[lineCount][pointer++] = 1;
                break;
            default:
                fprintf(stderr, "Input lo gajelas!");
                assert(false);
                break;
        }
        bufferPointer++;
    }

    return adjacencyLine;
}

void map::printAdjacencyList(){
    for (int i = 0; i < NODE_COUNT; i++){
        for (int j = 0; j < NODE_COUNT; j++)
            printf("%0.0f ", adjacencyList[i][j]);
        printf("\n");
    }
}

void map::cleanup(){
    //...
}