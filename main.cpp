#include <iostream>
#include "Stack.h"

using namespace std;

main() {

    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);    

    cout << "El elemento en la cima es: " << stack.top() << endl;
    stack.pop();
    cout << "El elemento en la cima es: " << stack.top() << endl;

    return 0;
}