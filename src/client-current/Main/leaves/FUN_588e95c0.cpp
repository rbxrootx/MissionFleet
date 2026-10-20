// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E95C0 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_588e95c0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 4C F5 E8 FF: call 0x58778b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf5
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [esi + 0cc0h], eax
        movzx ecx, word ptr [eax + 4]
        mov dl, cl
        and dl, 1fh
        mov edi, 10000000h
        cmp dl, 8
        ; Exact mapped bytes 75 13: jne 0x588e9600
        __asm _emit 0x75
        __asm _emit 0x13
        and ecx, 3e0h
        xor edx, edx
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 06: jne 0x588e9600
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [eax + 38ch], edi
        mov ecx, dword ptr [esi + 0cc0h]
        movzx eax, word ptr [ecx + 4]
        mov dl, al
        and dl, 1fh
        cmp dl, 3
        ; Exact mapped bytes 75 12: jne 0x588e9626
        __asm _emit 0x75
        __asm _emit 0x12
        and eax, 3e0h
        xor edx, edx
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 06: jne 0x588e9626
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 38ch], edi
        mov ecx, dword ptr [esi + 0cc0h]
        movzx eax, word ptr [ecx + 4]
        mov dl, al
        and dl, 1fh
        cmp dl, 4
        ; Exact mapped bytes 75 12: jne 0x588e964c
        __asm _emit 0x75
        __asm _emit 0x12
        and eax, 3e0h
        xor edx, edx
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 06: jne 0x588e964c
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 38ch], edi
        mov ecx, dword ptr [esi + 0cc0h]
        movzx eax, word ptr [ecx + 4]
        mov dl, al
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 75 12: jne 0x588e9672
        __asm _emit 0x75
        __asm _emit 0x12
        and eax, 3e0h
        xor edx, edx
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 06: jne 0x588e9672
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 38ch], edi
        mov ecx, dword ptr [esi + 0cc0h]
        movzx eax, word ptr [ecx + 4]
        mov dl, al
        and dl, 1fh
        cmp dl, 6
        ; Exact mapped bytes 75 12: jne 0x588e9698
        __asm _emit 0x75
        __asm _emit 0x12
        and eax, 3e0h
        xor edx, edx
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 06: jne 0x588e9698
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 38ch], edi
        mov ecx, dword ptr [esi + 0cc0h]
        movzx eax, word ptr [ecx + 4]
        mov dl, al
        and dl, 1fh
        cmp dl, 7
        ; Exact mapped bytes 75 12: jne 0x588e96be
        __asm _emit 0x75
        __asm _emit 0x12
        and eax, 3e0h
        xor edx, edx
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 06: jne 0x588e96be
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 38ch], edi
        mov ecx, dword ptr [esi + 0cc0h]
        movzx eax, word ptr [ecx + 4]
        mov dl, al
        and dl, 1fh
        cmp dl, 9
        ; Exact mapped bytes 75 12: jne 0x588e96e4
        __asm _emit 0x75
        __asm _emit 0x12
        and eax, 3e0h
        xor edx, edx
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 06: jne 0x588e96e4
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [ecx + 38ch], edi
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 07: je 0x588e96f2
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 7E EE FF FF: call 0x588e8570
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
