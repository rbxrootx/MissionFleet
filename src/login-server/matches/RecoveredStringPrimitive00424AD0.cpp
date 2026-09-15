// Exact legacy string primitive recovered from the server runtime.
extern "C" __declspec(naked) void Recovered00424AD0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push edi
    __asm push esi
    __asm mov edi, dword ptr [ebp+8]
    __asm mov edx, edi
    __asm mov esi, edi
    __asm xor eax, eax
    __asm or ecx, -1
    __asm repne scasb
    __asm cmp ecx, -2
    __asm je done
    __asm dec edi
    __asm dec edi
    __asm swap_loop:
    __asm cmp esi, edi
    __asm jae done
    __asm mov ah, byte ptr [esi]
    __asm mov al, byte ptr [edi]
    __asm mov byte ptr [esi], al
    __asm mov byte ptr [edi], ah
    __asm inc esi
    __asm dec edi
    __asm jmp short swap_loop
    __asm done:
    __asm mov eax, edx
    __asm pop esi
    __asm pop edi
    __asm leave
    __asm ret
}
