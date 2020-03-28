constexpr int NODE_COUNT = 20;

class map {
    private:
        // Variables
        double **adjacencyList;  // to be redefined later in a construtor
        char **name;
        // Functions, such as parsing
        double **parseAdjacencyList(char*);
    public:
        map(char*, char*);
        void printAdjacencyList();
        void cleanup();
};