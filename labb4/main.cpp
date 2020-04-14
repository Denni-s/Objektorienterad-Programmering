#include <iostream>
#include <math.h>
#include "template.h"
#include "header.h"
#include "drawwindow.h"
#include "textwindow.h"
using namespace std;


class DivisionByZeroException: public runtime_error{

public:
    DivisionByZeroException() : runtime_error("Division by zero.") {
    }
};


void task69(){
    Point <float> fpoint1(2.321, 4.5231);
    Point <float> fpoint2(6.7,8.9);
    Point <float> fpoint3(10.134, 23.4436);
    Point <double> dpoint1(20.4, 46.8);
    Point <double> dpoint2(69.54,87.31);
    Point <double> dpoint3(193.213, 313.445);
    cout<< fpoint1.getX() << endl;
    cout<< fpoint3.getY() << endl;
    cout << dpoint3.getX() << endl;
    dpoint3.setX(50.42069);
    cout << dpoint3.getX() << endl;
    cout << dpoint1.getDistanceTo(dpoint2) << endl;



}

int compute(int left, char op , int right)
{
    switch(op){
    case '+': return left + right;
    case '-': return left - right;
    case '*': return left * right;
    case '/':
        if(right == 0) throw DivisionByZeroException();
        return left / right;
    default:
       throw runtime_error("Invalid operation");
    }

}

void getInputs(int* pLeft, char* pMid, int* pRight){
    cout << "Enter left operand (an integer): " << endl;
    cin >> *pLeft;
    while(cin.fail()) {
        cout << "That was not an integer, please enter an INTEGER: " << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> *pLeft;
    }
    cout << "Enter operation symbol (+, -, / or *): " << endl;
    cin >> *pMid;
    cout << "Enter right operand (an integer): " << endl;
    cin >> *pRight;
    while(cin.fail()) {
        cout << "That was not an integer, please enter an INTEGER: " << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> *pRight;
    }
}

int calculator(){

    int leftOp, rightOp;
    char opSymbol;

    while(true){
      getInputs(&leftOp, &opSymbol, &rightOp);

      bool didCompute = false;
      while(!didCompute){

          try {
              int result = compute(leftOp, opSymbol, rightOp);
              didCompute = true;
              cout << leftOp << " " << opSymbol << " " << rightOp << " = " << result << endl;
          } catch (DivisionByZeroException d) {
              d.what();
             cout << "Enter right operator again (an integer): ";
               cin >> rightOp;
          }catch(runtime_error err){
              err.what();
              cout << "Invalid operation symbol. Enter again (+, - / or *): ";
              cin >> opSymbol;
          }
      }
    }
     return 0;
}


int main(int argc, char *argv[]){
task69();



}
