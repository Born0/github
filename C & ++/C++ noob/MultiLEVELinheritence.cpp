#include<iostream>

using namespace std;
class Box                         //"Box"is a main class
{
protected:
  int height;
  int width;
public:
  Box()
  {
    cout<<"default Box"<<endl;
  }
  Box(int h,int w)
  {
      cout<<"Pera Box"<<endl;
    height=h;
    width=w;
  }

  void output()
  {
    cout<<"height:"<<height<<"    width:"<<width<<endl;
  }
};


class Rectangle:public Box                  //"Rectangle" is a sub class of "Box"
{
protected:
  int breadth;
public:
  Rectangle()
  {
    cout<<"default Rectangle"<<endl;
  }
  Rectangle(int b):Box(2,3)
  {
    cout<<"Pera Rectangle"<<endl;
    breadth=b;
  }
  int volume()
  {
    int volume=breadth*height*width;
    cout<<"volume:"<<volume<<endl;
    return volume;
  }
};

class Add: public Rectangle                 //"Add" is a sub class of Rectangle && as "Rectangle" is a sub class of "Box"->"Add" is a (sub)sub class of "Box"
{
protected:
  int number;
public:
  Add()
  {
    cout<<"default Add"<<endl;
  }
  Add(int x):Rectangle(4)
  {
    cout<<"Pera Add"<<endl;
    number=x;

  }
  void valueAdded()
  {
    int value;
    value=volume()+number;
    cout<<"Value:"<<value<<endl;
  }

};

main()
{
  Add a1;
  a1=Add(10);
  a1.valueAdded();
}



                                                              //              Born 0
