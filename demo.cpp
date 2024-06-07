#include <iostream>
using namespace std;
class demo
{
public:
    void print(void)
    {
        cout << "working fine" << endl;
        cout << "working fine" << endl;
        cout << "fine" << endl;
    }
};
int main()
{
    demo obj;
    obj.print();
    return 0;
}
