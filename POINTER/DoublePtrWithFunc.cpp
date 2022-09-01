#include <bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1; // kuch change hoga - NO
    // *p2 = *p2 + 1;   // kuch change hoga -- YES
    **p2 = **p2 + 1; // kuch change hoga -- YES
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << endl << endl;
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
    cout<<endl;
}  

/* QS->
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}
*/
