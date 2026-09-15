// Exact VC6 unsigned 64-bit division runtime primitive.
extern "C" __declspec(naked) void Recovered0041E860()
{
    __asm push ebx
    __asm mov eax, dword ptr [esp+20]
    __asm or eax, eax
    __asm jne large_divisor
    __asm mov ecx, dword ptr [esp+16]
    __asm mov eax, dword ptr [esp+12]
    __asm xor edx, edx
    __asm div ecx
    __asm mov eax, dword ptr [esp+8]
    __asm div ecx
    __asm mov eax, edx
    __asm xor edx, edx
    __asm jmp short remainder_done
    __asm large_divisor:
    __asm mov ecx, eax
    __asm mov ebx, dword ptr [esp+16]
    __asm mov edx, dword ptr [esp+12]
    __asm mov eax, dword ptr [esp+8]
    __asm normalize:
    __asm shr ecx, 1
    __asm rcr ebx, 1
    __asm shr edx, 1
    __asm rcr eax, 1
    __asm or ecx, ecx
    __asm jne normalize
    __asm div ebx
    __asm mov ecx, eax
    __asm mul dword ptr [esp+20]
    __asm xchg ecx, eax
    __asm mul dword ptr [esp+16]
    __asm add edx, ecx
    __asm jb subtract_divisor
    __asm cmp edx, dword ptr [esp+12]
    __asm ja subtract_divisor
    __asm jb subtract_dividend
    __asm cmp eax, dword ptr [esp+8]
    __asm jbe subtract_dividend
    __asm subtract_divisor:
    __asm sub eax, dword ptr [esp+16]
    __asm sbb edx, dword ptr [esp+20]
    __asm subtract_dividend:
    __asm sub eax, dword ptr [esp+8]
    __asm sbb edx, dword ptr [esp+12]
    __asm neg edx
    __asm neg eax
    __asm sbb edx, 0
    __asm remainder_done:
    __asm pop ebx
    __asm ret 16
}
