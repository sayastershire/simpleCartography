#include "structure/mapNode.h"
#include "structure/map.h"
#include <cstdio>

// The sole purpose of main now is to test functions within classes.
// The real program will be in another location, and will be drawn with Windows API and GTK/qt

int main(int argc, const char *argv[]){
    map petaMIPA ("data/metadata.csv", "data/adjacencyList.csv");
    petaMIPA.printAdjacencyList();
    printf("Hallo!");
    return 0;
}