#include <iostream>
using namespace std;

int rows = 10;
int number;
int choice;

int main(){
 cout << "yay tabuadas\n";
 cout << "which tabuada do you want to ler\n";
 cin >> number;
 cout << "\ndo you want to print a custom number of rows? default is " << rows << "\n1 for yes\n2 for no\n";
 cin >> choice;

 if(choice == 1){
    cout << "how many rows do you want?\n";
     cin >> rows;
 }else{
    rows = 10;
 }

cout << "\nHERE IS THE TABUADA\n";
    for(int i = 1; i <= rows; i++){
        cout << number << " x " << i << " = " << number * i << endl;

}

}