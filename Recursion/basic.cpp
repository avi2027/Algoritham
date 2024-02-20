// desired output -> 1 2 3 hello 4 5 6 hello 7 8 9 hello 
#include<iostream>
using namespace std;
void fun(int i){
    if(i > 9){
        return;
    }

    cout << i <<" ";
    if(i % 3 == 0){
        cout << "hello" << " ";
    } 
    fun(i+1);
}

int main(){
    cout << endl;
    int i;
    fun(i);
    cout << endl;
}