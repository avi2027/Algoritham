/*desired output -> 
    input -> 1558
    output -> one five five eight
*/

#include<iostream>
using namespace std;
void sayDigit(int n, string arr[]){
    //base case
    if(n == 0)
        return;

    // proccessing
    int digit = n % 10;
    n = n / 10;

    // Recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";
}



int main(){
    string arr[10] = {"Zero", "One", "Two", "Three", "Four",
                         "Five", "Six", "Seven", "Eight", "Nine"};

    cout << "Enter number: ";
    int n;
    cin >> n;

    sayDigit(n, arr);
    
    return 0;
}
