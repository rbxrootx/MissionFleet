// Exact recovered indexed lock core.
extern "C" int Table005D193C;
extern "C" void *Import005E2424;
extern "C" __declspec(naked) void Recovered004B5290()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax*4+Table005D193C]
    __asm push ecx
    __asm call dword ptr [Import005E2424]
    __asm pop ebp
    __asm ret
}
