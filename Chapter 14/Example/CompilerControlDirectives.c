#include"DEFINE.H"
#ifndef TEST
#define TEST 1
#endif // TEST
#ifdef TEST
#undef TEST
#endif // TEST
