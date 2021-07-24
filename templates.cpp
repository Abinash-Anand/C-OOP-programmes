// #include <iostream>
// using namespace std;
// template <class T>
// T add(T &a, T &b)
// {
//     T result = a + b;
// }
// int main()
// {
//     int a = 5, b = 10;
//     float c = 3.15, d = 7.85;
//     cout << "The addition of a and b is: " << add(a, b) << endl;
//     cout << "The addition of c and d is: " << add(c, d) << endl;
// }
// Function Templates with Multiple Parameters
// #include <iostream>
// using namespace std;
// template <class X, class Y>
// void fun(X a, Y b)
// {
//     cout << "value of a = " << a << endl;
//     cout << "value of b is = " << b << endl;
// }
// int main()
// {
//     fun(10, 13.555);
// }
// Restrictions of Generic Functions
// #include <iostream>
// using namespace std;
// template <class X>
// void fun(X a)
// {
//     cout << "Value of a = " << a << endl;
// }
// template <class X, class Y>
// void fun(X b, Y c)
// {
//     cout << "Value of b = " << b << endl;
//     cout << "value of c = " << c << endl;
// }
// int main()
// {
//     fun(10);
//     fun(20, 22.3);
// }
// CLASS TEMPLATE
// #include <iostream>
// using namespace std;
// template <class T>
// class A
// {
// public:
//     T a = 5;
//     T b = 10;
//     void add()
//     {
//         int result = a + b;
//         cout << "Addition of a and b is = " << result << endl;
//     }
// };
// int main()
// {
//     A<int> c;
//     c.add();
// }
// CLASS TEMPLATE WITH MULTIPLE PARAMETERS
// #include <iostream>
// using namespace std;
// template <class T1, class T2>
// class A
// {
//     T1 a;
//     T2 b;

// public:
//     A(T1 x, T2 y)
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout << "value of a and b is = " << a << ", " << b << endl;
//     }
// };
// int main()
// {
//     A<int, float> d(5, 6.66);
//     d.display();
// }
// #include <iostream>
// using namespace std;
// template <class T, int size>
// class A
// {
// public:
//     T arr[size];
//     void insert()
//     {
//         int i = 1;
//         for (int j = 0; j < size; j++)
//         {
//             arr[j] = i;
//             i++;
//         }
//     }
//     void display()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// };
// int main()
// {
//     A<int, 100> d;
//     d.insert();
//     d.display();
// }
