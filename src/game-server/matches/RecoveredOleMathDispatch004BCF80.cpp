// Exact recovered OLE/math dispatch helper.
extern "C" __declspec(naked) void Recovered004BCF80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp+14]
    __asm and edx, 0ffffh
    __asm and edx, 800fh
    __asm mov eax, dword ptr [ebp+16]
    __asm shl eax, 4
    __asm or edx, eax
    __asm mov word ptr [ebp-2], dx
    __asm fld qword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
