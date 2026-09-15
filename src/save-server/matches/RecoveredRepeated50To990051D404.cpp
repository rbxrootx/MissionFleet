
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0051D404()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax]
    __asm sub ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 4]
    __asm sub ecx, dword ptr [ebp + 0xc]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 8]
    __asm add ecx, dword ptr [ebp + 0x10]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 8], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0xc]
    __asm add ecx, dword ptr [ebp + 0x14]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0xc], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
