
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00561B7B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm push eax
    __asm push 0
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm push 0
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call dword ptr [ecx + 0x1c]
    __asm pop ebp
    __asm ret 0x10
}
