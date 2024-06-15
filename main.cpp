#include <iostream>
#include <random>
#include "stack.h"

int main()
{

// Створення стеків.
    Stack stack_0;
    Stack stack_1;
    Stack stack_2;

    std::cout<<"Push, pop"<<std::endl;

// Ініціалізація стека 0.
    for (int i=0; i<21; i++)
        {
            stack_0.push(rand()%(1-25+1)+25);
        }

// Відображення стека 0.
    stack_0.show();
    std::cout<<std::endl;

// Повернення елемента з гори стека 0.
    stack_0.pop();
    stack_0.pop();

// Відображення стека 0.
    stack_0.show();
    std::cout<<std::endl;

// Повернення кількох елементів з гори стека 0.
    stack_0.multiPop(5);

// Відображення стека 0.
    stack_0.show();

// Застосування перевантаженого оператора.
    std::cout<<std::endl<<"Assignment operator"<<std::endl;
    for (int i=0; i<21; i++)
        {
            stack_1.push(rand()%(36-60+1)+60);
        }

// Відображення стека 1.
    stack_1.show();
    std::cout<<std::endl;

// Ініціалізація стека 1.
    for (int i=0; i<21; i++)
        {
            stack_2.push(rand()%(70-95+1)+95);
        }

// Відображення стека 2.
    stack_2.show();
    std::cout<<std::endl;

// Оператор присвоювання.
    stack_2=stack_1;
    stack_2.show();

// Конструктор копіювання.
    std::cout<<std::endl<<"Copy constructor"<<std::endl;
    stack_1.show();
    std::cout<<std::endl;
    Stack stack_3(stack_1);

// Відображення результату конструктора копіювання.
    stack_3.show();

    return 0;
}
