#include "test-data.h"

int test1(const char* s);
int test2(const char* s);
int test3(const char* s)
{
    return toSymbol3zz(s, 3);
}

int main()
{
    return test1("abc") + test2("xyz") + test3("xxx");
}
