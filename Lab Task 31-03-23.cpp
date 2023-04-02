// Lab Task 31-03-23.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
class C1
{
private:
   int b=0;    
protected:
    int c=0;
public:
    int  a;
    C1()
    {
        a = '0';
        b = '0';
        c = '0';
    }
    C1(int a, int b, int c)
    {
        cout << "parametric Constructor is called \n";
    }
/*
    void solution()
    {

    }
    void sol1()
    {

    }
    void sol2()
    {

    }
*/
};
class C2
{
private:
    int e;
protected:
    int f;
public:
    int  d;
    C2()
    {
        d= '0';
        e = '0';
        f = '0';
    }
    C2(int d, int e, int f)
    {
        cout << "parametric Constructor is called of class 2 \n";
    }
/*
    void solution1()
    {

    }
    void sol3()
    {

    }
    void sol4()
    {

    }
*/
};
class C3
{
private:
    int h;
protected:
    int i;
public:
    int  g;
    C3()
    {
        g = '0';
        h = '0';
        i = '0';
    }
    C3(int g, int h, int i)
    {
        cout << "parametric Constructor is called of class 3 \n";
    }
    /*
    void solution2()
    {

    }
    void sol5()
    {

    }
    void sol6()
    {

    }
*/
};
class C4
{
private:
    int k;
protected:
    int l;
public:
    int  j;
    C4()
    {
        k = '0';
        l = '0';
        j = '0';
    }
    C4(int k, int l, int j)
    {
        cout << "parametric Constructor is called of class 4 \n";
    }
/*
    void solution3()
    {

    }
    void sol7()
    {

    }
    void sol8()
    {

    }
*/
};
class C5
{
private:
    int n;
protected:
    int o;
public:
    int  m;
    C5()
    {
        m = '0';
        n = '0';
        o = '0';
    }
    C5(int k, int l, int j)
    {
        cout << "parametric Constructor is called of class 5 \n";
    }
/*
    void solution4()
    {

    }
    void sol9()
    {

    }
    void sol10()
    {

    }
*/
};
class C6:public C1
{
private:
    int q;
protected:
    int r;
public:
    int  p;
    C6()
    {
        p = '0';
        q = '0';
        r = '0';
    }
    C6(int p, int q, int r)
    {
        cout << "parametric Constructor is called of class 6 \n";
    }
/*
    void solution5()
    {

    }
    void sol11()
    {

    }
    void sol12()
    {


















    }
*/
};
class C7 : public C6
{
private:
    int t;
protected:
    int u;
public:
    int  s;
    C7()
    {
        s = '0';
        t = '0';
        u = '0';
    }
    C7(int s, int t, int u)
    {
        cout << "parametric Constructor is called of class 7 \n";
    }
/*
    void solution12()
    {

    }
    void sol13()
    {

    }
    void sol14()
    {

    }
*/
};
class C8 : public C7
{
protected:
    int x;
private:
    int w;
public:
    int  v;
    C8()
    {
        v = '0';
        w = '0';
        x = '0';
    }
    C8(int v, int w, int x)
    {
        cout << "parametric Constructor is called of class 8 \n";
    }
/*
    void solution15()
    {

    }
    void sol16()
    {

    }
    void sol17()
    {

    }
*/
};
class C9 : public C8 , public C7
{
protected:
    int a1;
private:
    int z;
public:
    int  y;
    C9()
    {
        y = '0';
        z = '0';
        a1 = '0';
    }
    C9(int y, int z, int a1)
    {
        cout << "parametric Constructor is called of class 9 \n";
    }
/*
    void solution18()
    {

    }
    void sol19()
    {

    }
    void sol20()
    {

    }
*/
};
class C10 : public C7 , public C8 , public C9
{
protected:
    int a4;
private:
    int a3;
public:
    int  a2;
    C10()
    {
        a2 = '0';
        a3 = '0';
        a4 = '0';
    }
    C10(int a2, int a3, int a4)
    {
        cout << "parametric Constructor is called of class 10 \n";
    }
/*
    void solution21()
    {

    }
    void sol22()
    {

    }
    void sol23()
    {

    }
*/
};
int main()
{
    C1 obj1(1,2,3);
    C2 obj2(4,5,6);
    C3 obj3(7,8,9);
    C4 obj4(10,11,12);
    C5 obj5(13,14,15);
    C6 obj6(16,17,18);
    C7 obj7(19,20,21);
    C8 obj8(22,23,24);
    C9 obj9(25,26,27);
    C10 obj10(28,29,30);
    cout << obj1.a << "\n" << obj2.d << "\n" << obj3.g << "\n" << obj4.j << "\n" << obj5.m << "\n" << obj6.p << obj7.s << "\n" << obj8.v << "\n" << obj9.y << "\n" << obj10.a2 << endl;
    //cout << obj1.b << "\n" << obj2.e << "\n" << obj3.h << "\n" << obj4.k << "\n" << obj5.n << "\n" << obj6.q << obj7.t << "\n" << obj8.w << "\n" << obj9.z << "\n" << obj10.a3 << endl;
    //cout << obj1.c << "\n" << obj2.f << "\n" << obj3.i << "\n" << obj4.l << "\n" << obj5.o << "\n" << obj6.r << obj7.u << "\n" << obj8.x << "\n" << obj9.y << "\n" << obj10.a4 << endl;
    //cout << obj1.a << "\n" << obj2.d << "\n" << obj3.g << "\n" << obj4.j << "\n" << obj5.m << "\n" << obj6.p << obj7.s << "\n" << obj8.v << "\n" << obj9.y << "\n" << obj10. << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file