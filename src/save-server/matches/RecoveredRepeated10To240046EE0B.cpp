
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered0046EE0B()
{
    __asm mov eax, dword ptr [ebp - 0x2c]
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov dword ptr fs:[0], ecx
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
