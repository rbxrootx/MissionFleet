// Exact shared optimized VC6 strchr implementation.
extern "C" __declspec(naked) void Recovered004B9FD0()
{
    __asm xor eax, eax
    __asm mov al, byte ptr [esp+8]
    __asm push ebx
    __asm mov ebx, eax
    __asm shl eax, 8
    __asm mov edx, dword ptr [esp+8]
    __asm test edx, 3
    __asm je aligned
    __asm prefix:
    __asm mov cl, byte ptr [edx]
    __asm inc edx
    __asm cmp cl, bl
    __asm _emit 074h
    __asm _emit 0d1h
    __asm test cl, cl
    __asm je not_found
    __asm test edx, 3
    __asm jne prefix
    __asm aligned:
    __asm or ebx, eax
    __asm push edi
    __asm mov eax, ebx
    __asm shl ebx, 10h
    __asm push esi
    __asm or ebx, eax
    __asm word_loop:
    __asm mov ecx, dword ptr [edx]
    __asm mov edi, 07efefeffh
    __asm mov eax, ecx
    __asm mov esi, edi
    __asm xor ecx, ebx
    __asm add esi, eax
    __asm add edi, ecx
    __asm xor ecx, 0ffffffffh
    __asm xor eax, 0ffffffffh
    __asm xor ecx, edi
    __asm xor eax, esi
    __asm add edx, 4
    __asm and ecx, 081010100h
    __asm jne inspect
    __asm and eax, 081010100h
    __asm je word_loop
    __asm and eax, 01010100h
    __asm jne null_tail
    __asm and esi, 080000000h
    __asm jne word_loop
    __asm null_tail:
    __asm pop esi
    __asm pop edi
    __asm not_found:
    __asm pop ebx
    __asm xor eax, eax
    __asm ret
    __asm inspect:
    __asm mov eax, dword ptr [edx-4]
    __asm cmp al, bl
    __asm je found0
    __asm test al, al
    __asm je null_tail
    __asm cmp ah, bl
    __asm je found1
    __asm test ah, ah
    __asm je null_tail
    __asm shr eax, 10h
    __asm cmp al, bl
    __asm je found2
    __asm test al, al
    __asm je null_tail
    __asm cmp ah, bl
    __asm je found3
    __asm test ah, ah
    __asm je null_tail
    __asm jmp word_loop
    __asm found3:
    __asm pop esi
    __asm pop edi
    __asm lea eax, [edx-1]
    __asm pop ebx
    __asm ret
    __asm found2:
    __asm lea eax, [edx-2]
    __asm pop esi
    __asm pop edi
    __asm pop ebx
    __asm ret
    __asm found1:
    __asm lea eax, [edx-3]
    __asm pop esi
    __asm pop edi
    __asm pop ebx
    __asm ret
    __asm found0:
    __asm lea eax, [edx-4]
    __asm pop esi
    __asm pop edi
    __asm pop ebx
    __asm ret
    __asm int 3
    __asm int 3
    __asm int 3
    __asm int 3
    __asm push ebp
}
