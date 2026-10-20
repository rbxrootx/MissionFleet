// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFDB0 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_588cfdb0() {
    __asm {
        sub esp, 0ch
        push ebp
        ; Exact mapped bytes 8B 2D F4 47 A2 58: mov ebp, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edi
        mov edi, dword ptr [ebp + 30h]
        mov eax, dword ptr [edi + 0cc0h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 74 0A: je 0x588cfddd
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F9 07: cmp cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x07
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x588cfea7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [eax + 35ch]
        xor edx, edx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 10h], 44ch
        mov byte ptr [esp + 0fh], cl
        cmp cl, 7
        ; Exact mapped bytes 75 08: jne 0x588cfe02
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 3e8h
        movzx esi, word ptr [eax + 0ch]
        shr esi, 0ah
        and esi, 1fh
        ; Exact mapped bytes 7E 60: jle 0x588cfe6e
        __asm _emit 0x7e
        __asm _emit 0x60
        mov eax, edi
        push ebx
        mov ebx, dword ptr [eax + 0cc0h]
        mov ebp, dword ptr [ebx + 268h]
        add edi, 0b40h
        mov ecx, 1fh
        sub ecx, edx
        mov eax, ebp
        shr eax, cl
        test al, 1
        ; Exact mapped bytes 75 28: jne 0x588cfe5a
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebx + 26ch]
        shr eax, cl
        test al, 1
        ; Exact mapped bytes 75 1C: jne 0x588cfe5a
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x588cfe5a
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 66 8B 4C 24 14: mov cx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 39 88 A0 00 00 00: cmp word ptr [eax + 0xa0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 08: jb 0x588cfe5a
        __asm _emit 0x72
        __asm _emit 0x08
        mov dword ptr [esp + 18h], 1
        inc edx
        add edi, 4
        cmp edx, esi
        ; Exact mapped bytes 7C C1: jl 0x588cfe23
        __asm _emit 0x7c
        __asm _emit 0xc1
        cmp dword ptr [esp + 18h], 0
        pop ebx
        ; Exact mapped bytes 75 3D: jne 0x588cfea7
        __asm _emit 0x75
        __asm _emit 0x3d
        mov cl, byte ptr [esp + 0fh]
        push 0
        push 0
        push 0
        cmp cl, 7
        ; Exact mapped bytes 75 17: jne 0x588cfe90
        __asm _emit 0x75
        __asm _emit 0x17
        push 31h
        ; Exact mapped bytes E8 70 BC E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 4E E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x4e
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0ch
        ret
        push 2bh
        ; Exact mapped bytes E8 59 BC E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 92 4E E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4e
        __asm _emit 0xe9
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0ch
        ret
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0ch
        ret
    }
}
