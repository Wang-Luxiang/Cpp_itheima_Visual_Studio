﻿/**************************************************
* File name:     01_内存分区模型.cpp
* Created time:  2021/4/16 22:16:58
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

// C++程序在执行是，将内存大方向划分为4个区域
    // 代码区：存放函数体的二进制代码，由操作系统进行管理
    // 全局区：存放全局变量和静态变量以及常量
    // 栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
    // 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
// 内存四区的意义：不同的区域存放的数据，拥有不同的生命周期，给我们更大的灵活编程
