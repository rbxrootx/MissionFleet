// Exact recovered OLE/math dispatch helper.
extern "C" __declspec(naked) void Recovered00479B20()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 12
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-12], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov dword ptr [ebp-8], ecx
    __asm mov edx, dword ptr [ebp+16]
    __asm add edx, 3feh
    __asm mov dword ptr [ebp-4], edx
    __asm mov eax, dword ptr [ebp+14]
    __asm and eax, 0ffffh
    __asm and eax, 800fh
    __asm mov ecx, dword ptr [ebp-4]
    __asm shl ecx, 4
    __asm or eax, ecx
    __asm mov word ptr [ebp-6], ax
    __asm fld qword ptr [ebp-12]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
