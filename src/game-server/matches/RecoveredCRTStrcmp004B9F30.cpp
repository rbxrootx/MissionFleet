// Exact recovered optimized CRT strcmp.
extern "C" __declspec(naked) int strcmp()
{
    __asm mov edx, dword ptr [esp+4]
    __asm mov ecx, dword ptr [esp+8]
    __asm test edx, 3
    __asm jne unaligned
    __asm aligned:
    __asm mov eax, dword ptr [edx]
    __asm cmp al, byte ptr [ecx]
    __asm jne different
    __asm or al, al
    __asm je equal
    __asm cmp ah, byte ptr [ecx+1]
    __asm jne different
    __asm or ah, ah
    __asm je equal
    __asm shr eax, 16
    __asm cmp al, byte ptr [ecx+2]
    __asm jne different
    __asm or al, al
    __asm je equal
    __asm cmp ah, byte ptr [ecx+3]
    __asm jne different
    __asm add ecx, 4
    __asm add edx, 4
    __asm or ah, ah
    __asm jne aligned
    __asm mov edi, edi
    __asm equal:
    __asm xor eax, eax
    __asm ret
    __asm nop
    __asm different:
    __asm sbb eax, eax
    __asm shl eax, 1
    __asm inc eax
    __asm ret
    __asm mov edi, edi
    __asm unaligned:
    __asm test edx, 1
    __asm je word_part
    __asm mov al, byte ptr [edx]
    __asm inc edx
    __asm cmp al, byte ptr [ecx]
    __asm jne different
    __asm inc ecx
    __asm or al, al
    __asm je equal
    __asm test edx, 2
    __asm je aligned
    __asm word_part:
    __asm mov ax, word ptr [edx]
    __asm add edx, 2
    __asm cmp al, byte ptr [ecx]
    __asm jne different
    __asm or al, al
    __asm je equal
    __asm cmp ah, byte ptr [ecx+1]
    __asm jne different
    __asm or ah, ah
    __asm je equal
    __asm _emit 083h
    __asm _emit 0c1h
}
