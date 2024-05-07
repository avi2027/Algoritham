#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int printPath(int sr, int sc, int er, int ec,string s){
    if(sr > er || sc > ec){
        return 0;
    }
    
    if(sr == er && sc == ec){
        cout << s << endl;
        return 1;
    }
    printPath(sr+1,sc,er,ec,s+"D"); // Down
    printPath(sr,sc+1,er,ec,s+"R"); // Right

}
int main(){
    int rows;
    cout << "Enter the number of rows in the maze: ";
    cin >> rows;
    int cols;
    cout << "Enter the number of columns in the maze: ";
    cin >> cols;
    printPath(1,1,rows,cols,""); //Count the number of possible paths from top-left to bottom-right
    
}
