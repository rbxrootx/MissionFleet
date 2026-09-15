// Exact recovered repeated control/table leaf helper.
extern "C" __declspec(naked) void Recovered00436810()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov dword ptr [ebp-4], 0
    __asm mov eax, dword ptr [ebp-4]
    __asm or al, 1
    __asm mov dword ptr [ebp-4], eax
    __asm mov eax, dword ptr [ebp+8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
