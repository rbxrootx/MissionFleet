extern "C" void Call004F13B6();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004F1467()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm push -0x14
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004F13B6
    __asm pop ebp
    __asm ret 0x10
}
