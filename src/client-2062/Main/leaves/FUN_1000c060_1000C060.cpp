// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000C060 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_1000c060_1000C060() {
    __asm {
        mov eax, dword ptr [ecx + 7ch]
        mov edx, dword ptr [ecx + 74h]
        shl eax, 4
        push ebx
        mov ebx, dword ptr [ecx + 31ch]
        mov eax, dword ptr [eax + edx + 0f7ch]
        push esi
        push edi
        mov edx, dword ptr [eax + 0ch]
        mov edi, dword ptr [edx + 31ch]
        cmp ebx, edi
        ; Exact mapped bytes 7E 63: jle 0x1000c0e9
        __asm _emit 0x7e
        __asm _emit 0x63
        mov edx, dword ptr [ecx + 224h]
        lea eax, [edx*8]
        sub eax, edx
        lea eax, [eax + eax*2]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 D2 02 00 00: mov ax, word ptr [ecx + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, edx
        mov dword ptr [ecx + 224h], esi
        lea edx, [eax + eax*2]
        mov eax, 66666667h
        shl edx, 2
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp esi, edx
        ; Exact mapped bytes 7E 67: jle 0x1000c13f
        __asm _emit 0x7e
        __asm _emit 0x67
        xor eax, eax
        cmp ebx, edi
        pop edi
        pop esi
        mov dword ptr [ecx + 224h], edx
        pop ebx
        sete al
        ret
        ; Exact mapped bytes 7D 54: jge 0x1000c13f
        __asm _emit 0x7d
        __asm _emit 0x54
        mov eax, dword ptr [ecx + 224h]
        lea edx, [eax + eax*2]
        shl edx, 5
        sub edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 D2 02 00 00: mov ax, word ptr [ecx + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, edx
        mov dword ptr [ecx + 224h], esi
        lea edx, [eax*8]
        sub edx, eax
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp esi, edx
        ; Exact mapped bytes 7D 06: jge 0x1000c13f
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [ecx + 224h], edx
        xor eax, eax
        cmp ebx, edi
        pop edi
        pop esi
        sete al
        pop ebx
        ret
    }
}
