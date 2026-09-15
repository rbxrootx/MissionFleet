
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00497D5D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dx, word ptr [ebp + 0x10]
    __asm mov word ptr [ecx + 4], dx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [eax + 8], ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0xc], 0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0x14], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [ecx + 0x18], edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
