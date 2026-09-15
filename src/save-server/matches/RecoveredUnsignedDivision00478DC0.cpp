// Exact VC6 unsigned 64-bit division runtime primitive.
extern "C" __declspec(naked) void Recovered00478DC0()
{
    __asm push ebx
    __asm push esi
    __asm mov eax, dword ptr [esp+24]
    __asm or eax, eax
    __asm jne large_divisor
    __asm mov ecx, dword ptr [esp+20]
    __asm mov eax, dword ptr [esp+16]
    __asm xor edx, edx
    __asm div ecx
    __asm mov ebx, eax
    __asm mov eax, dword ptr [esp+12]
    __asm div ecx
    __asm mov edx, ebx
    __asm jmp short quotient_done
    __asm large_divisor:
    __asm mov ecx, eax
    __asm mov ebx, dword ptr [esp+20]
    __asm mov edx, dword ptr [esp+16]
    __asm mov eax, dword ptr [esp+12]
    __asm normalize:
    __asm shr ecx, 1
    __asm rcr ebx, 1
    __asm shr edx, 1
    __asm rcr eax, 1
    __asm or ecx, ecx
    __asm jne normalize
    __asm div ebx
    __asm mov esi, eax
    __asm mul dword ptr [esp+24]
    __asm mov ecx, eax
    __asm mov eax, dword ptr [esp+20]
    __asm mul esi
    __asm add edx, ecx
    __asm jb decrement
    __asm cmp edx, dword ptr [esp+16]
    __asm ja decrement
    __asm jb quotient_ready
    __asm cmp eax, dword ptr [esp+12]
    __asm jbe quotient_ready
    __asm decrement:
    __asm dec esi
    __asm quotient_ready:
    __asm xor edx, edx
    __asm mov eax, esi
    __asm quotient_done:
    __asm pop esi
    __asm pop ebx
    __asm ret 16
}
