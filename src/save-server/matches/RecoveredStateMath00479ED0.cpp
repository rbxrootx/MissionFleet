// Exact recovered repeated state/math helper.
extern "C" __declspec(naked) void Recovered00479ED0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm and ecx, 7fffffffh
    __asm mov edx, dword ptr [ebp+20]
    __asm and edx, 80000000h
    __asm or ecx, edx
    __asm mov dword ptr [ebp-4], ecx
    __asm fld qword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
