// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886DFD2 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_5886dfd2_5886DFD2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        cmp dword ptr [ebp + 10h], 0
        mov edx, dword ptr [ebp + 0ch]
        push esi
        mov esi, 58969998h
        movzx ecx, dx
        cmovne esi, dword ptr [ebp + 10h]
        push edi
        lea eax, [ecx + 2400h]
        cmp dword ptr [esi], 0
        movzx eax, ax
        ; Exact mapped bytes 75 47: jne 0x5886e043
        __asm _emit 0x75
        __asm _emit 0x47
        mov edi, 3ffh
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 77 0D: ja 0x5886e013
        __asm _emit 0x77
        __asm _emit 0x0d
        push dword ptr [ebp + 14h]
        push esi
        ; Exact mapped bytes E8 CA D1 00 00: call 0x5887b1d9
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 66: jmp 0x5886e079
        __asm _emit 0xeb
        __asm _emit 0x66
        lea eax, [edx + 2800h]
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        mov eax, ecx
        ; Exact mapped bytes 77 11: ja 0x5886e031
        __asm _emit 0x77
        __asm _emit 0x11
        and eax, 0ffff27ffh
        add eax, 40h
        shl eax, 0ah
        mov dword ptr [esi], eax
        xor eax, eax
        ; Exact mapped bytes EB 48: jmp 0x5886e079
        __asm _emit 0xeb
        __asm _emit 0x48
        push dword ptr [ebp + 14h]
        push esi
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 D0 00 00: call 0x5887b117
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 36: jmp 0x5886e079
        __asm _emit 0xeb
        __asm _emit 0x36
        push dword ptr [ebp + 14h]
        mov ecx, 3ffh
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 77 B9: ja 0x5886e009
        __asm _emit 0x77
        __asm _emit 0xb9
        lea eax, [ebp - 8]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push eax
        movzx eax, dx
        and eax, 0ffff23ffh
        ; Exact mapped bytes 66 0F 13 45 F8: movlpd qword ptr [ebp - 8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf8
        add eax, dword ptr [esi]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 D0 00 00: call 0x5887b117
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push eax
        ; Exact mapped bytes E8 4F D1 00 00: call 0x5887b1c5
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        pop edi
        pop esi
        leave
        ret
    }
}
