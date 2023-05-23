#include<iostream>
#pragma pack(1)
using namespace std;

class Test {
private:
    int x,a;
    char s;
    double y;
public:
    void* operator new(size_t size);
    void operator delete(void*);
    Test(int i,int j,double k ,char l)
    {
        x = i;
        a = j;
        y = k;
        s = l;
        cout << "Constructor called n"<<endl;
    }
    ~Test() { cout << "Destructor called n"<<endl; }
};
void* Test::operator new(size_t size)
{
    void *storage = malloc(size);
    cout << "new called n   "<<size<<endl;
    return storage;
}
void Test::operator delete(void *p)
{
    cout<<"delete called n"<<endl;
    free(p);
}
int main()
{
    Test *m = new Test(5,10,7.3577777,'m');
    cout<<sizeof(Test);
    delete m;
    return 0;
}
