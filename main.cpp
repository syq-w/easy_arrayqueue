#include <iostream>

#include "arrayQueue/arrayQueue.h"
#include "Lineartable/arrayList.h"
#include "Lineartable/chain.h"
#include "Matrix/matrix.h"
#include "Stack/arrayStack.h"

int main()
{
    arrayQueue<int> a(5);
    a.push(10);
    a.push(11);
    a.push(12);

    std::cout << a.back() << std::endl;


    a.pop();
    a.pop();
    a.pop();
    //a.pop();

    arrayList<int> b(10);
    //b.insert(0,10);
    //b.insert(0,19);

    chain<int> c;

    matrix<int> d(1,2);

    arrayStack<int> e;
    e.push(1);
    e.push(2);
    e.push(3);

    std::cout << e.top() << std::endl;

}