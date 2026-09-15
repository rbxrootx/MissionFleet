
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00461B1D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call dword ptr [edx + 0xfc]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
