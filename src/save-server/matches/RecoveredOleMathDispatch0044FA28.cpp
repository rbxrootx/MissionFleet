// Exact recovered OLE/math dispatch helper.
extern "C" __declspec(naked) void Recovered0044FA28()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm push 0
    __asm mov eax, dword ptr [ebp+16]
    __asm push eax
    __asm mov cx, word ptr [ebp+12]
    __asm push ecx
    __asm push 2
    __asm mov edx, dword ptr [ebp+8]
    __asm push edx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax]
    __asm mov edx, dword ptr [ebp-4]
    __asm push edx
    __asm call dword ptr [ecx+104]
    __asm add esp, 24
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 12
}
