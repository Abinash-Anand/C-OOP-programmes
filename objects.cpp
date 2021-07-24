// #include <iostream>
// using namespace std;
// class employee
// {
// public:
//     int id;
//     string name;
//     float salary;
//     float experience;

//     void insert(int i, string n, float s, float exp)
//     {
//         id = i;
//         name = n;
//         salary = s;
//         experience = exp;
//     }
//     void display()
//     {
//         cout << id << name << salary << " " << experience << endl;
//     }
// };
// int main()
// {
//     employee e1;
//     e1.insert(101, " Abinash ", 200000, 12.5);
//     employee e2;
//     e2.insert(101, " Abinash ", 200000, 12.5);
//     employee e3;
//     e3.insert(101, " Abinash ", 200000, 12.5);
//     e1.display();
//     e2.display();
//     e3.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class account
// {
// public:
//     int accNo;
//     string name;
//     static int count;
//     account(int accNo, string name)
//     {
//         this->accNo = accNo;
//         this->name = name;
//         count++;
//     }
//     void display()
//     {
//         cout << accNo << " " << name << endl;
//     }
// };
// int account::count = 0;
// int main(void)
// {

//     account a1 = account(11211, " Abinash ");
//     account a2 = account(11222, " loki ");
//     account a3 = account(11233, " Ben ");
//     a1.display();
//     a2.display();
//     a3.display();
//     cout << "Total number of objects are: " << account::count;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// struct Rectangle
// {
//     int width, height;
// };
// int main()
// {
//     struct Rectangle rec;
//     rec.width = 10;
//     rec.height = 15;
//     cout << "The area of rectangle is: " << (rec.width * rec.height);
// }
// #include <iostream>
// using namespace std;
// struct Rectangle
// {
//     int width, height, area;
//     Rectangle(int w, int h)
//     {
//         width = w;
//         height = h;
//     }
//     void areaOfRec(int width, int height)
//     {
//         area = width * height;
//     }
//     void display()
//     {
//         cout << "The area of Rectangle is: " << area << endl;
//     }
// };
// int main(void)
// {
//     struct Rectangle rec1 = Rectangle(10, 11);
//     struct Rectangle rec2 = Rectangle(10, 12);
//     struct Rectangle rec3 = Rectangle(10, 13);
//     rec1.display();
//     rec2.display();
//     rec3.display();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// enum week
// {
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday,
//     Sunday
// };
// int main()
// {
//     week Day;
//     Day = Monday;
//     cout << " Day: " << Day + ;
// }
// #include <iostream>
// using namespace std;
// class Box
// {
// private:
//     int length;

// public:
//     Box() : length(0){};
//     friend int printLength(Box);
// };
// int printLength(Box b)
// {
//     b.length += 10;
//     return b.length;
// }
// int main()
// {
//     int a = 1;
//     a += 1;
//     Box b;
//     cout << "Length of the box: " << printLength(b) << a << endl;
//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------
// #include <iostream>
// #include <list>
// using namespace std;
// class youtubeChannel
// {
// public:
//     string Name;
//     string OwnerName;
//     int subscriberCount;
//     list<string> PublishedVideoTitles;
// };
// int main()
// {
//     youtubeChannel ytChannel;
//     ytChannel.Name = "Indian in Germany";
//     ytChannel.OwnerName = "Abinash Anand";
//     ytChannel.subscriberCount = 1080;
//     ytChannel.PublishedVideoTitles = {"The Rudest Book ever", "Elon Musk", "Wings of fire"};
//     cout << "Name " << ytChannel.Name << endl;
//     cout << "OwnerName " << ytChannel.OwnerName << endl;
//     cout << "subscriberCount " << ytChannel.subscriberCount << endl;
//     for (string videoTitle : ytChannel.PublishedVideoTitles)
//     {

//         cout << videoTitle << endl;
//     }

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------
// #include <iostream>
// using namespace std;
// class account
// {
// public:
//     float salary = 6000;
// };
// class programmer : public account
// {
// public:
//     float bonus = 5000;
// };
// int main()
// {
//     programmer p1;
//     cout << "Salary = " << p1.salary << endl;
//     cout << " Bonus = " << p1.bonus << endl;
// }
// #include <iostream>
// using namespace std;
// class animal
// {
// public:
//     void eat()
//     {
//         cout << "eating..." << endl;
//     }
// };
// class dog : public animal
// {
// public:
//     void bark()
//     {
//         cout << "Barking..." << endl;
//     }
// };
// class babyDog : public dog
// {
// public:
//     void weep()
//     {
//         cout << "Weeping...";
//     }
// };
// int main(void)
// {
//     babyDog d1;
//     d1.eat();
//     d1.bark();
//     d1.weep();
// }
// #include <iostream>
// using namespace std;
// class A
// {
// protected:
//     int a;

// public:
//     void get_a(int n)
//     {
//         a = n;
//     }
// };
// class B
// {
// protected:
//     int b;

// public:
//     void get_b(int n)
//     {
//         b = n;
//     }
// };
// class C : public A, public B
// {
// public:
//     void display()
//     {
//         cout << "Value of a is: " << a << endl;
//         cout << "Value of b is: " << b << endl;
//         cout << "Addition of a and b is: " << (a + b) << endl;
//     }
// };
// int main(void)
// {
//     C c1;
//     c1.get_a(10);
//     c1.get_b(20);
//     c1.display();
// }
// ABSTRACTION
// #include <iostream>
// using namespace std;
// class shape
// {
// public:
//     virtual void draw() = 0;
// };
// class rectangle : shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing a rectangle..." << endl;
//     }
// };
// class circle : shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing a circle..." << endl;
//     }
// };
// int main(void)
// {
//     rectangle r;
//     circle c;
//     r.draw();
//     c.draw();
// }
// #include <iostream>
// using namespace std;
// namespace first
// {
//     void sayHello()
//     {
//         cout << "Hello first Namespace!!" << endl;
//     }
// };
// namespace second
// {
//     void sayHello()
//     {
//         cout << "HEllo Second namespace!!" << endl;
//     }
// };
// int main(void)
// {
//     first::sayHello();
//     second::sayHello();
// }
// #include <iostream>
// using namespace std;
// namespace first
// {
//     void sayHello()
//     {
//         cout << "Hello namesapce One!!" << endl;
//     }
// };
// namespace second
// {
//     void sayHello()
//     {
//         cout << "Hello namespace second!!" << endl;
//     }
// };
// using namespace first;
// int main(void)
// {
//     sayHello();
// }
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char key[] = "mango";
//     char buffer[50];
//     do
//     {
//         cout << "What is your Fav fruit?" << endl;
//         cin >> buffer;
//     } while (strcmp(key, buffer) != 0);
//     cout << "Ans is correct!!";
// }
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     char key[25], buffer[25];
//     cout << "Enter the key string: ";
//     cin.getline(key, 25);
//     cout << "Enter the buffer string: ";
//     cin.getline(buffer, 25);
//     strcat(key, buffer);
//     cout << "Key = " << key << endl;
//     cout << "Buffer = " << buffer << endl;
//     return 0;
// }
