#include <iostream>
using namespace std;

class stack
{
    int *top, *stk;
    int size = 0;

    public:

        stack()
        {
            top = NULL;

            cout << "\nEnter Stack (Array) size: ";
            cin >> size;

            stk = new int[size];
        }

        void push( int x)
        {

        }

        void pop()
        {
            if ( top == NULL)
            {
                cout << "\nStack underflow." << endl;
                return;
            }

            if ( top == stk)
            {
                top = NULL;
                return;
            }

            top--;
        }

        void peek()
        {
            cout << "\n" << *top << endl;
        }

        void print()
        {
            while ( top != NULL)
            {
                cout << *top << "\t";
                pop();
            }
        }
};

int main()
{
    stack s1;
    s1.push( 1);
    s1.push( 2);
    s1.push( 3);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.push( 12332);
    s1.push( 12312333);
    s1.print();
    s1.pop();
}