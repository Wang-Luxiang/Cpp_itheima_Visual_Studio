/**************************************************
* File name:     12_Nested_Loop.cpp
* Created time:  02/10/2021 9:09:36 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
using namespace std;

/**
 *      **********
 *      **********
 *      **********
 *      **********
 *      **********
 *      **********
 *      **********
 *      **********
 *      **********
 *      **********
 *      **********
 */

int main() {
    for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 10; i++) {
            cout << "*";
        }
        cout << endl;
    }
}
