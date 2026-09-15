// Exact recovered optimized CRT memcmp.
extern "C" __declspec(naked) int memcmp()
{
    __asm mov eax, dword ptr [esp+12]
    __asm test eax, eax
    __asm je zero_return
    __asm mov edx, dword ptr [esp+4]
    __asm push esi
    __asm push edi
    __asm mov esi, edx
    __asm mov edi, dword ptr [esp+16]
    __asm or edx, edi
    __asm and edx, 3
    __asm je aligned_setup
    __asm test eax, 1
    __asm je byte_pairs
    __asm mov cl, byte ptr [esi]
    __asm cmp cl, byte ptr [edi]
    __asm jne diff_flags
    __asm inc esi
    __asm inc edi
    __asm dec eax
    __asm je pop_return
    __asm byte_pairs:
    __asm mov cl, byte ptr [esi]
    __asm mov dl, byte ptr [edi]
    __asm cmp cl, dl
    __asm jne diff_flags
    __asm mov cl, byte ptr [esi+1]
    __asm mov dl, byte ptr [edi+1]
    __asm cmp cl, dl
    __asm jne diff_flags
    __asm add edi, 2
    __asm add esi, 2
    __asm sub eax, 2
    __asm jne byte_pairs
    __asm pop_return:
    __asm pop edi
    __asm pop esi
    __asm zero_return:
    __asm ret
    __asm aligned_setup:
    __asm mov ecx, eax
    __asm and eax, 3
    __asm shr ecx, 2
    __asm je remainder
    __asm repe cmpsd
    __asm je remainder
    __asm mov ecx, dword ptr [esi-4]
    __asm mov edx, dword ptr [edi-4]
    __asm cmp cl, dl
    __asm jne compare_result
    __asm cmp ch, dh
    __asm jne compare_result
    __asm shr ecx, 16
    __asm shr edx, 16
    __asm cmp cl, dl
    __asm jne compare_result
    __asm cmp ch, dh
    __asm compare_result:
    __asm mov eax, 0
    __asm diff_flags:
    __asm sbb eax, eax
    __asm pop edi
    __asm sbb eax, -1
    __asm pop esi
    __asm ret
    __asm remainder:
    __asm test eax, eax
    __asm je pop_return
    __asm mov edx, dword ptr [esi]
    __asm mov ecx, dword ptr [edi]
    __asm cmp dl, cl
    __asm jne compare_result
    __asm dec eax
    __asm je remainder_done
    __asm cmp dh, ch
    __asm jne compare_result
    __asm dec eax
    __asm je remainder_done
    __asm and ecx, 0ff0000h
    __asm and edx, 0ff0000h
    __asm cmp edx, ecx
    __asm jne compare_result
    __asm dec eax
    __asm remainder_done:
    __asm pop edi
    __asm pop esi
    __asm ret
}
