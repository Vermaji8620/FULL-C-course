/*

NOTE:-  JB V HM NON-CONSTRUCTOR PROGRAM BANATE HAI ....MATLAB KI JISME SIRF AUR SIRF FUNCTIONS HO...THAT IS FUNCTIONS FOR INPUTTING, DISPLAYING, AND etc. TO USKO CALL KRNE KA SBSE ASAN TARIKA HAI CLASS KA OBJECT BANAKE USKO '.' BANAKE CALL KRNE KA------AB DERIVED CLASS KA OBJECT BANANE K BAAD HM DERIVED CLASS KA FUNCTION KO CALL KRNE K SATH SATH, BASE CLASSES KA V FUNCTIONS KO '.' KRKE CALL KR SKTE HAI--
AND DONO TYPE KA CLASSES KA ANDAR KA VALUE CHANGE KR SKTE HAI---

NOW AGAR YE EK CONSTRUCTOR PROGRAM HUA TO HM USKO ALAG TARIKA SE CALL KRTE HAI....ie, CLASS KA OBJECT BANANE K BAAD '=' KRKE CALL KRTE HAI...JAISE KIYA JATA HAI...NOW (JAISA KI JANTE HAI KI KOI V FUNCTION AGAR HUA KISI V BASE CLASSES YA FIR DERIVED CLASSES KA TO '.' KRKE CALL KRNEGE-- )...NOW AGAR DERIVED CLASS ME SE BASE CLASS KA CONSTRUCTOR KO VALUE PASS KRNA HOGA(KR HI SKTE HAI..AFTER ALL INHERITED FUNCTION HAI) TO KAISE KRNEGE? ISKE LIYE HM TO '=' NAI USE KR PAYENGE...ISILIYE ISKA SYNTAX ALAG HOTA HAI THODA ----JAISE KI IS PROGRAM ME GIVEN HAI-------------"Derived(int a, int b, int c, int d) : Base2(b), Base1(a)"-------------IS SYNTAX SE HM DERIVED CLASS ME V INITIAL VALUE SET KR SKTE HAI AND ALSO BASE CLASSES KO VALUE PASS KR SKTE HAI(KYUNKI WO INHERITED HAI INTO THE 'DERIVED' CLASS)

*/

#include <iostream>
using namespace std;

/*

// base classes get executed at first and then the derived classes--

case 1:
class B: public A{
    // order of execution of constructor --> first A() then B()
};

case 2:
class A: public B, public C{
  // order of execution of constructor --> B() then  C() and then A()
}

case 3:
class A: public B, virtual public C{
    // order of execution of constructor -->  This is a special case: [first C(), then B() as the base classes]  and then A()
}


*/

class Base1
{
    int data1;

public:
    Base1() {}
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }
    void printdataBase1()
    {
        cout << " the value of data is " << data1 << endl;
    }
};

class Base2
{

    int data2;

public:
    Base2() {}
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }
    void printdataBase2()
    {
        cout << " the value of data is " << data2 << endl;
    }
};

class Derived : public Base2, public Base1
{
    int derived1, derived2;

public:
    Derived() {}
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
    {

        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called " << endl;
    };
    void printdataDerived()
    {
        cout << " the value of derived1 is " << derived1 << endl;
        cout << " the value of derived2 is " << derived2 << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derived harry;
    harry = Derived(1, 2, 3, 4);
    harry.printdataDerived();
    harry.printdataBase1();
    harry.printdataBase2();
    return 0;
}
