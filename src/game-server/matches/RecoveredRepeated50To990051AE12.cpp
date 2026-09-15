
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0051AE12()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [eax + 0x20]
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [edx + 0x20], 0
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov dword ptr [eax + 0x1c], 0
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov dword ptr [ecx + 0x18], 0
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [edx + 0x14], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
