#define FREE -1
#define DELETED -2

typedef struct myreg{
    int key;
}myreg;

void init(myreg myTable[], int tam);
void insert(myreg myTable[], myreg reg, int tam);
int search(myreg myTable[], int id, int tam);
int removeReg(myreg myTable[], int id, int tam);

float loadFactor(myreg myTable[], int tam);

void show(myreg myTable[], int tam);