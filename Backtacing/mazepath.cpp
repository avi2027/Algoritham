#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    // base case
    if(sr > er || sc > ec){
        return 0;
    }
    
    // Recursive Case
    if(sr == er && sc == ec){
        return 1;
    }
    
    // check right move is possible
    int downWays = maze(sr+1, sc, er, ec); // move downwards
    int rightWays = maze(sr, sc+1, er, ec); // move rightwards
    int totalWays = downWays + rightWays;
    return totalWays;
}
int main(){
    int rows;
    cout << "Enter the number of rows in the maze: ";
    cin >> rows;
    int cols;
    cout << "Enter the number of columns in the maze: ";
    cin >> cols;
    int count  = maze(1,1,rows,cols); //Count the number of possible paths from top-left to bottom-right
    cout << "The number of possible paths from top-left to bottom-right are: ";
    cout << count << endl;
}
