
#include <iostream>
using namespace std;

template <char* p> class Example {
public:
    void display() {
        cout << *p << endl;
    }
};

static  char c = 'a';
int main(int argc, char* argv[])
{

    Example<&c> a; //±àÒë³ö´í
    a.display();
}