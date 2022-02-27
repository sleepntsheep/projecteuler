#include <iostream>
#include <vector>

#define pii pair<int, int>
#define tii pair<pii, int>

using namespace std;

//int c[1000];
int main() {
    int rows = 15;
    int in = 0;
    int b[rows][rows];
    FILE *ptr = fopen("18.txt", "r");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows * 2 - 1; j++) {
            fscanf(ptr, "%d", &b[i][j]);
        }
    }

    vector<vector<pii>> graph(rows*(rows+1)/2);


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows * 2 - 1; j++) {
            int z;
            fscanf(ptr, "%d", &z);

            graph[in] 

            in++;
        }
    }
}
