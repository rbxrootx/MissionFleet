// Exact legacy string primitive recovered from the server runtime.
extern "C" __declspec(naked) void Recovered00424B80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push edi
    __asm mov edi, dword ptr [ebp+8]
    __asm xor eax, eax
    __asm or ecx, -1
    __asm repne scasb
    __asm inc ecx
    __asm neg ecx
    __asm dec edi
    __asm mov al, byte ptr [ebp+12]
    __asm std
    __asm repne scasb
    __asm inc edi
    __asm cmp byte ptr [edi], al
    __asm je absent
    __asm xor eax, eax
    __asm jmp done
    __asm absent:
    __asm mov eax, edi
    __asm done:
    __asm cld
    __asm pop edi
    __asm leave
    __asm ret
}
