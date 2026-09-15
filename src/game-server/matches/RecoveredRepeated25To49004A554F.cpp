
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004A554F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call dword ptr [eax + 0x104]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
