// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A2D80 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_587a2d80() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        lea edi, [ebx + 78h]
        mov ecx, 2dh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 8B 12 01 00 00: mov cx, word ptr [ebx + 0x112]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0e00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov dword ptr [ebx + 408h], eax
        mov eax, 200h
        ; Exact mapped bytes 66 2B C8: sub cx, ax
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0xc8
        movzx ecx, cx
        neg ecx
        sbb ecx, ecx
        and ecx, 36h
        add ecx, 10h
        mov dword ptr [ebx + 3cch], ecx
        mov dword ptr [ebx + 3f8h], 44h
        mov dword ptr [ebx + 3fch], 3ch
        ; Exact mapped bytes E8 56 9E 1D 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9e
        __asm _emit 0x1d
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587a2dec
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 42h
        mov dword ptr [ebx + 400h], eax
        ; Exact mapped bytes E8 3C 9E 1D 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9e
        __asm _emit 0x1d
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587a2e06
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 26h
        mov edx, 0aah
        ; Exact mapped bytes 66 31 93 22 01 00 00: xor word ptr [ebx + 0x122], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebx + 404h], eax
        pop edi
        mov eax, edx
        ; Exact mapped bytes 66 31 83 24 01 00 00: xor word ptr [ebx + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
