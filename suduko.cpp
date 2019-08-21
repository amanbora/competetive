#include<iostream>
#define sudoku 9
#define N 9
#define blank 0
using namespace std;


bool UsedInRow(int grid[N][N], int row, int num)
{
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}

bool UsedInCol(int grid[N][N], int col, int num)
{
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}

bool UsedInBox(int grid[N][N], int boxStartRow,
               int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxStartRow]
                    [col + boxStartCol] == num)
                return true;
    return false;
}

bool issafe(int grid[N][N], int row,
                   int col, int num)
{

    return !UsedInRow(grid, row, num) &&
           !UsedInCol(grid, col, num) &&
           !UsedInBox(grid, row - row % 3 ,
                      col - col % 3, num) &&
            grid[row][col] == blank;
}

bool findpos(int graph[sudoku][sudoku], int &row, int &col){
    for(row=0;row<sudoku;row++){
        for(col=0;col<sudoku;col++){
            if(graph[row][col]==blank){
                return true;
            }
        }
    }
    return false;
}

bool solve(int graph[sudoku][sudoku]){
    int row,col;
    if(!findpos(graph,row,col))
      return true;
    for(int i=1;i<=9;i++){

        if(issafe(graph,row,col,i)){
            graph[row][col] = i;
            if(solve(graph))
              return true;
            graph[row][col] = blank;
        }
    }
    return false;
}

void printGrid(int grid[N][N])
{
    for (int row = 0; row < 9; row++)
    {
    for (int col = 0; col < 9; col++)
            cout << grid[row][col] << " ";
    }

}

int main(){

      int graph[sudoku][sudoku];
      for(int i=0;i<sudoku;i++){
          for(int j=0;j<sudoku;j++){
              cin>>graph[i][j];
          }
        }

      if(solve(graph))printGrid(graph);

    


}
