#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger
{
  private:
    int myInteger_;

  public:
    MyInteger();
    MyInteger(int);
    void setInteger(int);
    int getInteger() const;
    int operator[](int index);
};

#endif