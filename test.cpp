#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

// int test (int a, int b, int (*what)(int,int))
// {
//  int g = (*what)(a,b);
//  cout << g << endl;
//     return (g);
// }

int test (int x, int y, int (*what)(int,int))
{
  int g = (*what)(x,y);
  return (g);
}

int main ()
{
    // int a[] = {5,3,4};
    // cout << a.size();
    test(2,5,add);
    cout << "tt";
    return 0;
}