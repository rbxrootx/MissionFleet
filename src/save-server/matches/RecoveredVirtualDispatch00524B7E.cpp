// Exact recovered fixed-argument virtual dispatch wrapper.
extern "C" __declspec(naked) void Recovered00524B7E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm push 0
    __asm push 0
    __asm mov eax, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx+48]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
