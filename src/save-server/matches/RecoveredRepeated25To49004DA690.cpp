extern "C" void Call004DA870();
extern "C" void Call004DA9EE();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004DA690()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [ebp + 8], 0
    __asm je loc_004DA6B0
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Call004DA9EE
    __asm push eax
    __asm call Call004DA870
loc_004DA6B0:
    __asm pop ebp
    __asm ret 8
}
