/**************************************************
* File name:     05_Function_Declaration.cpp
* Created time:  3/14/2021 9:08:49 AM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * ���߱������������Ƽ����ʹ�ú�����������������Ե�������
 * �������������Զ�Σ����Ǻ����Ķ���ֻ����һ��
 */

// ��ǰ���߱����������Ĵ��ڣ��������ú���������
// ����������
int compare(int a, int b);

int main() {
    int a = 10;
    int b = 20;
    cout << compare(a, b) << endl;

    return 0;
}

// �ȽϺ�����ʵ���������͵����ֽ��бȽϣ����ؽϴ��ֵ
int compare(int a, int b) {
    return a > b ? a : b;
}