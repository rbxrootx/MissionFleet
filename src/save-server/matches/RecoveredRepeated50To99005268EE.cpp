extern "C" void Call0052671E();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered005268EE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov dword ptr [ebp - 4], 0
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call0052671E
    __asm mov edx, dword ptr [ebp - 4]
    __asm or edx, 1
    __asm mov dword ptr [ebp - 4], edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
