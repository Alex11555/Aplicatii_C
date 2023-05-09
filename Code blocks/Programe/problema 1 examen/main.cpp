#include <iostream>

using namespace std;
int k=0;
void matrice(int n, int a[][50], int v[]) {
  int row = 0, col = 0, direction = 0, steps = n;
  while (k < n * n)
    {
    for (int i = 0; i < steps; i++) {
      v[k++] = a[row][col];
      switch (direction) {
        case 0:
          col++;
          break;
        case 1:
          row++;
          break;
        case 2:
          col--;
          break;
        case 3:
          row--;
          break;
      }
    }
    direction = (direction + 1) % 4;
    if (direction == 1 || direction == 3)
    {
        steps--;
    }
    }}

int main()
{
    int S[50][50];
    int n;
    cin >> n;
    int V[2000];
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> S[i][j];
            matrice(n, S, V);

    for (i = 0; i <= k; i++)
        cout << V[i] << " ";


    return 0;


}
