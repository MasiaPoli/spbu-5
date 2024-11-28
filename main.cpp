#include <iostream>
#include "lst.h"
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
void ppush(lst <int> &l, int a)
{
    l.push(a);
}
int ttop(lst <int> &l)
{
    return l.top();
}
void ppop(lst <int> &l)
{
    l.pop();
}
void pprint(lst <int> &l)
{
    l.print();
    cout<<'\n';
}
void test_double()
{
    steck <double> s;
    stack <double> S;
    for(int i=1; i<=10; i++)
    {
        if(i%3==0)
        {
            s.pop();
            S.pop();
        }
        else
        {
            s.push(i*0.1);
            S.push(i*0.1);
        }
        if(s.top()!=S.top())
        {
            cout<<"wa\n";
            s.delall();
            return;
        }
    }
    cout<<"ok\n";

}
void qtest_char()
{
    och <char> o;
    queue <char> q;

}

template <class T> class numerate
{
public:
    numerate(T start = 0, T _shift = 1): seed(start), shift(_shift) {};
    T operator () () {T old = seed; seed += shift; return old; }
private:
    T seed, shift;
};

template <class T, class C> T sum (const C& c)
{
    T res = 0;
    for (typename C::const_iterator i = c.begin(); i != c.end(); ++i)
       res += *i;
    return res;
}

int main()
{
  /*  steck <int> s;
    for(int i=0; i<10; i++)
    {
        int a, b;
        cin>>a;
        if(!a)
        {
            ppop(s);
        }
        else
        {
            cin>>b;
            ppush(s, b);
        }
        cout<<ttop(s)<<'\n';
    }
    pprint(s);
     och <int> o;
    for(int i=0; i<10; i++)
    {
        int a, b;
        cin>>a;
        if(!a)
        {
            ppop(o);
        }
        else
        {
            cin>>b;
            ppush(o, b);
        }
        cout<<ttop(o)<<'\n';
    }
    pprint(o);
    s.delall();
    o.delall();
    */
    steck<int> s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);

    cout << s1 << endl;         // 3->2->1
    cout << s1.lendgh() << endl;

    steck<int> s2 (s1), s3;

    s1.pop();
    s1.push(4);
    s1.push(5);

    s2.pop();
    s2.push(6);

    cout << s1 << endl;         // 5->4->2->1
    cout << s1.lendgh() << endl;

    cout << s2 << endl;         // 6->2->1
    cout << s2.lendgh() << endl;

    s3 = s1;

    s1.pop();
    s1.push(7);
    s1.push(8);

    s3.pop();
    s3.push(9);

    cout << s1 << endl;         // 8->7->4->2->1
    cout << s1.lendgh() << endl;

    cout << s2 << endl;         // 6->2->1
    cout << s2.lendgh() << endl;

    cout << s3 << endl;         // 9->4->2->1
    cout << s3.lendgh() << endl;
    /* steck<int> c1, c2;
    numerate<int> f(100);

    c1.push(1);
    c1.push(2);
    c1.push(3);

    c2.push(5);
    c2 = c1;
    c2.push(4);

    cout << c1 << endl;          // 3->2->1
    cout << c1.lendgh() << endl;

    cout << c2 << endl;          // 4->3->2->1
    cout << c2.lendgh() << endl;

    swap(c1, c2);

    cout << c1 << endl;          // 4->3->2->1
    cout << c1.lendgh() << endl;

    cout << c2 << endl;          // 3->2->1
    cout << c2.lendgh() << endl;

    generate(c1.get_top(), c1.get_end(), f);

    cout << c1 << endl;          // 100->101->102->103
    cout << c1.lendgh() << endl;

    cout << sum<int,lst<int>>(s2) << endl;
    */
    och<int> c1;

    c1.push(1);
    c1.push(2);
    c1.push(3);

    cout << c1 << endl;          // 1->2->3
    cout << c1.lendgh() << endl;

    och<int> c2 (c1), c3;

    c1.pop();
    c1.push(4);
    c1.push(5);

    c2.pop();
    c2.push(6);

    cout << c1 << endl;         // 2->3->4->5
    cout << c1.lendgh() << endl;

    cout << c2 << endl;         // 2->3->6
    cout << c2.lendgh() << endl;

    c3 = c1;

    c1.pop();
    c1.push(7);
    c1.push(8);

    c3.pop();
    c3.push(9);

    cout << c1 << endl;         // 3->4->5->7->8
    cout << c1.lendgh() << endl;

    cout << c2 << endl;         // 2->3->6
    cout << c2.lendgh() << endl;

    cout << c3 << endl;
    cout << c3.lendgh() << endl;  // 3->4->5->9
    return 0;
}
