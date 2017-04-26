#include <iostream>
#include <string>

using namespace std;

int welcome();
string getOperator();

int main() {
    welcome();
    string toBeFigured = getOperator();
    return 0;
}

int welcome() {
    cout<<"Hello World, Welcome to Scientifc Calculator"<<endl;
    cout<<"Please, Tell Us What Operation You'd like to use? (trigo, log, add, subtract)"<<endl;
    return 0;
}
string getOperator() {
    string operation;
    cin>>operation;
    return operation;
}
