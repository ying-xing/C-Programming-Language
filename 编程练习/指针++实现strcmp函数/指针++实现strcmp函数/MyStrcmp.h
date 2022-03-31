#pragma once

#ifndef __MYSTRCMP_H__
#define __MYSTRCMP_H__

//函数声明
/*
	功能：比较两个字符串大小
	返回值：1 //第一个实参大于第二个实参
			-1 //第一个实参小于第二个实参
			0 //第一个实参等于第二个实参
	形参1：第一个字符串首地址
	形参2：第二个字符串首地址
*/
int MyStrcmp(const char *str1, const char *str2);

#endif