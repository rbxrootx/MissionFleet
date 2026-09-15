
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00498CD0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov dword ptr [eax], ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [edx + 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm mov dword ptr [ecx + 8], edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm mov dword ptr [eax + 0xc], ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 0x18]
    __asm mov dword ptr [edx + 0x10], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 0x18], 0
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0x1c], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0x20], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x14
}
