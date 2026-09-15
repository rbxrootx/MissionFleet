// Validate an object pointer before the MFC object-core path uses it.
// The pointer arrives in ECX; preserve the original debug assertion loop.
extern "C" char File005C74E8;
extern "C" int __stdcall Assert00534A00(const char *, int);
extern "C" void __fastcall Recovered004FB26A(void *object)
{
    do {
        if (object == 0 && Assert00534A00(&File005C74E8, 0x70))
            __asm int 3
    } while (0);
}
