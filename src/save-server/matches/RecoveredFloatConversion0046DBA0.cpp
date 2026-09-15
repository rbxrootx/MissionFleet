// Exact x87-to-signed-64-bit conversion helper from the VC6 runtime.
extern "C" __declspec(naked) void Recovered0046DBA0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm add esp, -12
    __asm fstcw word ptr [ebp-2]
    __asm fwait
    __asm mov ax, word ptr [ebp-2]
    __asm or ah, 12
    __asm mov word ptr [ebp-4], ax
    __asm fldcw word ptr [ebp-4]
    __asm fistp qword ptr [ebp-12]
    __asm fldcw word ptr [ebp-2]
    __asm mov eax, dword ptr [ebp-12]
    __asm mov edx, dword ptr [ebp-8]
    __asm leave
    __asm ret
}
