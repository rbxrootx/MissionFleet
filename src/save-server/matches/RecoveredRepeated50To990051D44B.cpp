
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0051D44B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax]
    __asm mov edx, dword ptr [ebp + 8]
    __asm add ecx, dword ptr [edx]
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 4]
    __asm mov eax, dword ptr [ebp + 8]
    __asm add edx, dword ptr [eax + 4]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 4], edx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [edx + 8]
    __asm sub ecx, dword ptr [eax + 8]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 8], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [eax + 0xc]
    __asm sub edx, dword ptr [ecx + 0xc]
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0xc], edx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
