// Validate an object pointer before the MFC object-core path uses it.
// The pointer arrives in ECX; preserve the original debug assertion loop.
extern "C" char File00673C70;
extern "C" int __stdcall Assert00528D40(const char *, int);
extern "C" void __fastcall Recovered004DA36A(void *object)
{
    do {
        if (object == 0 && Assert00528D40(&File00673C70, 0x70))
            __asm int 3
    } while (0);
}
