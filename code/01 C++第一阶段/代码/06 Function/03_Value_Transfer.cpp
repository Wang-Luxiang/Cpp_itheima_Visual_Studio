/**************************************************
* File name:     03_Value_Transfer.cpp
* Created time:  3/13/2021 10:23:34 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/*
    ֵ���ݾ��Ǻ�������ʱʵ�ν���ֵ������β�
    ֵ����ʱ������βη����ı䣬������Ӱ���β�
*/

// ���庯����ʵ���������ֽ��н�������
// ��������Ҫ����ֵ��������ʱ������Ϊvoid 
void swap(int num1, int num2) {
    cout << "���ֽ���ǰ��" << num1 << "\t" << num2 << endl;
    // return 0; ����Ҫ����ֵʱ�����Բ�дreturn
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "���ֽ�����" << num1 << "\t" << num2 << endl;
}

int main() {
    int a = 10;
    int b = 20;
    swap(a, b);

    return 0;
}
