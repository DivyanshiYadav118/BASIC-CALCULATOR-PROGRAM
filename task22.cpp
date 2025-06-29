#include <iostream>
using namespace std;

int main() {

  char op ,choice;
  float num1, num2;
  do{

      cout<<"=== BASIC CALCULATOR ==="<<endl;
      cout << "Enter operator: +, -, *, /: ";
      cin >> op;
      cout << "Enter your first number : ";
      cin >> num1;
      cout<<"Enter your second number :";
      cin>>num2;

      switch(op) {

        case '+':
          cout << num1 << " + " << num2 << " = " << num1 + num2<<endl;
          break;

        case '-':
          cout << num1 << " - " << num2 << " = " << num1 - num2<<endl;
          break;

        case '*':
          cout << num1 << " * " << num2 << " = " << num1 * num2<<endl;
          break;

        case '/':
          cout << num1 << " / " << num2 << " = " << num1 / num2<<endl;
          break;

        default:
          // If the operator is other than +, -, * or /, error message is shown
          cout << "Error! operator is not correct"<<endl;
          break;
      }

      //for asking that user wants to continue calculation or not?
  cout<< " Do you want to perform another calculation? (y/n): ";
  cin>>choice;
    }while(choice== 'y' || choice == 'Y');
    cout<<"Thanks for using this calculator!"<<endl;

  return 0;
}
