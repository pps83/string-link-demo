static const unsigned char teststring[] = "\n\nTEST-STRING-ABC\n\n";

static const unsigned testinteger[] = { 1163135498, 1227707475, 1195725902, 825053765, 168440626 }; // \n\nTEST-INTEGER-123\n\n

static inline constexpr char toUpper(char c)
{
    return (c >= 'a' && c <= 'z') ? c - ('a' - 'A') : c;
}

static inline constexpr int streqi(const char* str, const unsigned char* str2, unsigned len) noexcept
{
    bool ret = true;
    for (; 0 < len; --len, ++str, ++str2)
        ret &= (toUpper(*str) == *str2);
    return ret;
}

static __forceinline unsigned toSymbol3zz(const char* sym, unsigned len)
{
    unsigned ret = sym[0] + sym[1];
    return (ret && streqi(sym, teststring + testinteger[ret], len)) ? ret : 0;
}
