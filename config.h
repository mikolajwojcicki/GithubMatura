#pragma once
//#define E13
//#define E14
//#define E31
//#define E32
//#define E40
//#define E62
//#define E63
//#define E6
//#define E715
//#define E71
//#define E73
//#define E81
//#define E82
//#define E83

class zadania
{
public:
	zadania() {
#ifdef E13
		e13();
#endif
#ifdef E14
		e14();
#endif
#ifdef E31
		e31();
#endif
#ifdef E32
		e32();
#endif
#ifdef E40
		e40();
#endif
#ifdef E62
		e62();
#endif
#ifdef E63
		e63();
#endif
#ifdef E6
		e();
#endif
#ifdef E715
		e715();
#endif
#ifdef E71
		e71();
#endif
#ifdef E73
		e73();
#endif
#ifdef E81
		e81();
#endif
#ifdef E82
		e82();
#endif
#ifdef E83
	e83();
#endif
	};
#ifdef E13
	void e13();
#endif
#ifdef E14
	void e14();
#endif
#ifdef E31
	void e31();
#endif
#ifdef E32
	void e32();
#endif
#ifdef E40
	void e40();
#endif
#ifdef E62
	void e62();
#endif
#ifdef E63
	void e63();
#endif
#ifdef E6
	void e6();
#endif
#ifdef E715
	void e715();
#endif
#ifdef E71
	void e71();
#endif
#ifdef E73
	void e73();
#endif
#ifdef E81
	void e81();
#endif
#ifdef E82
	void e82();
#endif
#ifdef E83
	void e83();
#endif
};