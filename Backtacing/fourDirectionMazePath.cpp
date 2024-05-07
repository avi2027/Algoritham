#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int printPath(int sr, int sc, int er, int ec,string s,bool isVisited[][100] ){
    if(sr<0 || sc<0){
        return 0;
    }
    if(sr > er || sc > ec){
        return 0;
    }
    if(isVisited[sr][sc]){
        return 0;
    }
    if(sr == er && sc == ec){
        cout << s << endl;
        return 1;
    }
    isVisited[sr][sc] = true;
    printPath(sr+1,sc,er,ec,s+"D",isVisited); // Down
    printPath(sr,sc+1,er,ec,s+"R",isVisited); // Right
    printPath(sr,sc-1,er,ec,s+"L",isVisited); // Left
    printPath(sr-1,sc,er,ec,s+"U",isVisited); // Up
    isVisited[sr][sc] = false;

}
int main(){
    int rows;
    cout << "Enter the number of rows in the maze: ";
    cin >> rows;
    int cols;
    cout << "Enter the number of columns in the maze: ";
    cin >> cols;
    bool isVisited[rows][100];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            isVisited[i][j] = false;
        }
    }
    printPath(0,0,rows-1,cols-1,"",isVisited); //Count the number of possible paths from top-left to bottom-right
    
}
