/**************************************************
* File name:     04_Common_Style_Of_Function.cpp
* Created time:  3/13/2021 10:40:47 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
#include <string.h>
using namespace std;

// �����ĳ�����ʽ
// 1���޲��޷�
void test01() {
    cout << "����test01  �޲��޷�" << endl;
}
// 2���в��޷�
void test02(int a) {
    cout << "����test02  �в��޷�" << endl;
}
// 3���޲��з�
string test03() {
    cout << "����test03  �޲��з�" << endl;
    return "����test03";
}
// 4���в��з�
string test04(int b) {
    cout << "����test04  �в��з�" << endl;
    return "����test02";
}

int main() {
    test01();
    test02(100);
    test03();
    test04(100);

    return 0;
}