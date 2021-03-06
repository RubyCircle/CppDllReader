﻿#include "pch.h"
#include "framework.h"
#include <windows.h>
#include <exception>
#include "DllReader.h"

// Windows only
HMODULE DllReader::GetHModule()
{
	return hLib;
}

DllReader::DllReader(const char path[])
{
	hLib = LoadLibraryA(path);
	if (hLib == NULL || nullptr)
	{
		throw std::exception("Load dll error");
	}
}
DllReader::DllReader(HMODULE &module)
{
	hLib = module;
	if (hLib == NULL || nullptr)
	{
		throw std::exception("Load dll error");
	}
}

DllReader::~DllReader()
{
	if (hLib != NULL || nullptr)
	{
		FreeLibrary(hLib);
	}
}

// Read function
template<class T>
T DllReader::CallArgDllFunction(const char functionName[])
{
	typedef T(*functionClass)();
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		return func();
	}
	throw std::exception("Load function error");
}
template<class T, class T1>
T DllReader::CallArgDllFunction(const char functionName[], T1 input)
{
	typedef T(*functionClass)(T1);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		return func(input);
	}
	throw std::exception("Load function error");
}
template<class T, class T1, class T2>
T DllReader::CallArgDllFunction(const char functionName[], T1 input1, T2 input2)
{
	typedef T(*functionClass)(T1, T2);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		return func(input1, input2);
	}
	throw std::exception("Load function error");
}
template<class T, class T1, class T2, class T3>
T DllReader::CallArgDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3)
{
	typedef T(*functionClass)(T1, T2, T3);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		return func(input1, input2, input3);
	}
	throw std::exception("Load function error");
}
template<class T, class T1, class T2, class T3, class T4>
T DllReader::CallArgDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4)
{
	typedef T(*functionClass)(T1, T2, T3, T4);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		return func(input1, input2, input3, input4);
	}
	throw std::exception("Load function error");
}
template<class T, class T1, class T2, class T3, class T4, class T5>
T DllReader::CallArgDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4, T5 input5)
{
	typedef T(*functionClass)(T1, T2, T3, T4, T5);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		return func(input1, input2, input3, input4, input5);
	}
	throw std::exception("Load function error");
}
template<class T, class T1, class T2, class T3, class T4, class T5, class T6>
T DllReader::CallArgDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4, T5 input5, T6 input6)
{
	typedef T(*functionClass)(T1, T2, T3, T4, T5, T6);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		return func(input1, input2, input3, input4, input5, input6);
	}
	throw std::exception("Load function error");
}

void DllReader::CallVoidDllFunction(const char functionName[])
{
	typedef void(*functionClass)();
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		func();
	}
	throw std::exception("Load function error");
}
template<class T1>
void DllReader::CallVoidDllFunction(const char functionName[], T1 input)
{
	typedef void(*functionClass)(T1);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		func(input);
	}
	throw std::exception("Load function error");
}
template<class T1, class T2>
void DllReader::CallVoidDllFunction(const char functionName[], T1 input1, T2 input2)
{
	typedef void(*functionClass)(T1, T2);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		func(input1, input2);
	}
	throw std::exception("Load function error");
}
template<class T1, class T2, class T3>
void DllReader::CallVoidDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3)
{
	typedef void(*functionClass)(T1, T2, T3);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		func(input1, input2, input3);
	}
	throw std::exception("Load function error");
}
template<class T1, class T2, class T3, class T4>
void DllReader::CallVoidDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4)
{
	typedef void(*functionClass)(T1, T2, T3, T4);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		func(input1, input2, input3, input4);
	}
	throw std::exception("Load function error");
}
template< class T1, class T2, class T3, class T4, class T5>
void DllReader::CallVoidDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4, T5 input5)
{
	typedef void(*functionClass)(T1, T2, T3, T4, T5);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		func(input1, input2, input3, input4, input5);
	}
	throw std::exception("Load function error");
}
template<class T1, class T2, class T3, class T4, class T5, class T6>
void DllReader::CallVoidDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4, T5 input5, T6 input6)
{
	typedef void(*functionClass)(T1, T2, T3, T4, T5, T6);
	functionClass func = (functionClass)GetProcAddress(hLib, functionName);
	if (func != NULL || nullptr)
	{
		func(input1, input2, input3, input4, input5, input6);
	}
	throw std::exception("Load function error");
}

// Var
template<class T>
T DllReader::GetDllVar(const char VarName[])
{
	return (T)GetProcAddress(hLib, VarName);
}