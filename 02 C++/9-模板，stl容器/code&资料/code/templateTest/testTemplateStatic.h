#pragma once
class testTemplateStatic
{
public:
	template<typename T1, typename T2>
	T1 add(T1 t1, T2 t2)
	{
		return t1 + t2;
	}
	template<typename T1, typename T2>
	static T1 s_add(T1 st1, T2 st2);
};
template<typename T1, typename T2>
T1 testTemplateStatic::s_add(T1 st1, T2 st2)
{
	return st1 + st2;
}

