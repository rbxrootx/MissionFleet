
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0045C842()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 0x14]
    __asm sub ecx, 0x76c
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 0x14], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 0x10]
    __asm sub ecx, 1
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 0x10], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 0x18]
    __asm sub ecx, 1
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 0x18], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax + 0x1c]
    __asm sub ecx, 1
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 0x1c], ecx
    __asm pop ebp
    __asm ret 4
}
