
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004B4DF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm add ecx, 4
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov dword ptr [edx], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm mov ax, word ptr [ecx - 4]
    __asm pop ebp
    __asm ret
}
