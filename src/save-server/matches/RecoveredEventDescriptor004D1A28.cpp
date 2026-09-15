// Exact recovered event/descriptor helper.
extern "C" __declspec(naked) void Recovered004D1A28()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm l0:
    __asm xor eax, eax
    __asm test eax, eax
    __asm je l1
    __asm int 3
    __asm l1:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne l0
    __asm l2:
    __asm xor edx, edx
    __asm test edx, edx
    __asm je l3
    __asm int 3
    __asm l3:
    __asm xor eax, eax
    __asm test eax, eax
    __asm jne l2
    __asm l4:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm je l5
    __asm int 3
    __asm l5:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne l4
    __asm l6:
    __asm xor eax, eax
    __asm test eax, eax
    __asm je l7
    __asm int 3
    __asm l7:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne l6
    __asm l8:
    __asm xor edx, edx
    __asm test edx, edx
    __asm je l9
    __asm int 3
    __asm l9:
    __asm xor eax, eax
    __asm test eax, eax
    __asm jne l8
    __asm mov ebx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [ebp+0ch]
    __asm mov edx, dword ptr [ebp+10h]
    __asm mov ecx, dword ptr [ebp+14h]
    __asm scan:
    __asm cmp dword ptr [ebx+10h], 0
    __asm je missing
    __asm cmp eax, dword ptr [ebx]
    __asm je second
    __asm advance:
    __asm add ebx, 18h
    __asm jmp scan
    __asm second:
    __asm cmp edx, dword ptr [ebx+4]
    __asm jne advance
    __asm cmp ecx, dword ptr [ebx+8]
    __asm jb advance
    __asm cmp ecx, dword ptr [ebx+0ch]
    __asm ja advance
    __asm mov dword ptr [ebp+8], ebx
    __asm jmp result
    __asm missing:
    __asm xor eax, eax
    __asm mov dword ptr [ebp+8], eax
    __asm result:
    __asm mov eax, dword ptr [ebp+8]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm pop ebp
    __asm ret 10h
}
