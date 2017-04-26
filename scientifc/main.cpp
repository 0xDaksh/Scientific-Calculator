#include <iostream>
#include <string>

using namespace std;

int welcome();
string getOperator();
string figureOperation(string a);
int doTheMath(string operation);

int main() {
    welcome();
    string toBeFigured = getOperator();
    string operation = figureOperation(toBeFigured);
    doTheMath(operation);
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
string figureOperation(string a) {
    string operation = "not defined";
    if(a == "add" || a == "addition" || a == "sum") {
        operation = "+";
    } else if (a == "sub" || a == "subtract" || a == "minus" || a == "difference") {
        operation = "-";
    } else if(a == "multiply" || a == "product") {
        operation = "*";
    } else if (a == "division" || a == "divide" || a == "div") {
        operation = "/";
    } else {
        operation = "not defined";
    }
    return operation;
}
int doTheMath(string operation) {
    float a = 0, b = 0;
    if(operation == "not defined") {
        cout<<"Sorry, There's no such Operation defined "<<operation <<endl;
    } else {
        cout<<"What's the First Number?"<<endl;
        cin>>a;
        cout<<"What's the second Number?"<<endl;
        cin>>b;
        if(a == 0 && b == 0) {
            cout<<"Ouput = 0"<<endl;
        } else {
            if(operation == "+") {
                cout<<"Output = " << a + b << endl;
            } else if(operation == "-") {
                cout<<"Output = " << a - b << endl;
            } else if (operation == "*") {
                cout<<"Output = " << a * b << endl;
            } else {
                cout<<"Output = " << a / b << endl;
            }
        }
    }
    return 0;
}
