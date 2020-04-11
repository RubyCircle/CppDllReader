#pragma once

class DllReader
{
private:
	HMODULE hLib; // get
public:

	HMODULE GetHModule();

	DllReader(const char path[]);
	DllReader(HMODULE &module);

	~DllReader();

	// Read function
	template<class T>
	T CallArgDllFunction(const char functionName[]);
	template<class T, class T1>
	T CallArgDllFunction(const char functionName[], T1 input);
	template<class T, class T1, class T2>
	T CallArgDllFunction(const char functionName[], T1 input1, T2 input2);
	template<class T, class T1, class T2, class T3>
	T CallArgDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3);
	template<class T, class T1, class T2, class T3, class T4>
	T CallArgDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4);
	template<class T, class T1, class T2, class T3, class T4, class T5>
	T CallArgDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4, T5 input5);
	template<class T, class T1, class T2, class T3, class T4, class T5, class T6>
	T CallArgDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4, T5 input5, T6 input6);

	void CallVoidDllFunction(const char functionName[]);
	template<class T1>
	void CallVoidDllFunction(const char functionName[], T1 input);
	template<class T1, class T2>
	void CallVoidDllFunction(const char functionName[], T1 input1, T2 input2);
	template<class T1, class T2, class T3>
	void CallVoidDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3);
	template<class T1, class T2, class T3, class T4>
	void CallVoidDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4);
	template< class T1, class T2, class T3, class T4, class T5>
	void CallVoidDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4, T5 input5);
	template<class T1, class T2, class T3, class T4, class T5, class T6>
	void CallVoidDllFunction(const char functionName[], T1 input1, T2 input2, T3 input3, T4 input4, T5 input5, T6 input6);

	// Var
	template<class T>
	T GetDllVar(const char VarName[]);
};
