
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004A89E1()
{
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov dword ptr fs:[0], ecx
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
