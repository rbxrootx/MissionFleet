
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00533E35()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x40]
    __asm or ecx, 0x20
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0x40], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
