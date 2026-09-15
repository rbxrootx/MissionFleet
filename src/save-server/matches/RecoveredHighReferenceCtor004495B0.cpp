// Exact recovered high-reference constructor.
extern "C" void Target004DA4C4();
extern "C" __declspec(naked) void Recovered004495B0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm push eax
    __asm call Target004DA4C4
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
