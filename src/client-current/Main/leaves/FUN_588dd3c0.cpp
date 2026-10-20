// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DD3C0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_588dd3c0() {
    __asm {
        movzx eax, word ptr [ecx + 164h]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 4C 01 00 00: je 0x588dd51c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 79: jne 0x588dd44f
        __asm _emit 0x75
        __asm _emit 0x79
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 0F 8F 39 01 00 00: jg 0x588dd51c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3
        ; Exact mapped bytes 66 89 81 64 01 00 00: mov word ptr [ecx + 0x164], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x588dd51c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 100ch]
        movzx eax, word ptr [eax + 4]
        mov cl, al
        and cl, 1fh
        cmp cl, 7
        ; Exact mapped bytes 75 24: jne 0x588dd438
        __asm _emit 0x75
        __asm _emit 0x24
        and eax, 3e0h
        cmp eax, 160h
        ; Exact mapped bytes 75 18: jne 0x588dd438
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0a0h]
        push 0
        push 1
        push 0
        ; Exact mapped bytes E8 09 2B F8 FF: call 0x5885ff40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2b
        __asm _emit 0xf8
        __asm _emit 0xff
        ret
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0a0h]
        push 4bh
        push 1
        push 0
        ; Exact mapped bytes E8 F2 2A F8 FF: call 0x5885ff40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        ret
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 75: jne 0x588dd4ca
        __asm _emit 0x75
        __asm _emit 0x75
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 0F 8F BA 00 00 00: jg 0x588dd51c
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 89 91 64 01 00 00: mov word ptr [ecx + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x588dd51c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 100ch]
        movzx eax, word ptr [ecx + 4]
        mov dl, al
        and dl, 1fh
        cmp dl, 7
        ; Exact mapped bytes 75 23: jne 0x588dd4b2
        __asm _emit 0x75
        __asm _emit 0x23
        and eax, 3e0h
        cmp eax, 160h
        ; Exact mapped bytes 75 17: jne 0x588dd4b2
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0a0h]
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 8F 2A F8 FF: call 0x5885ff40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        ret
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0a0h]
        push 4bh
        push 0
        push 0
        ; Exact mapped bytes E8 77 2A F8 FF: call 0x5885ff40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        ret
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 10: jne 0x588dd4e0
        __asm _emit 0x75
        __asm _emit 0x10
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 7F 43: jg 0x588dd51c
        __asm _emit 0x7f
        __asm _emit 0x43
        mov edx, 6
        ; Exact mapped bytes EB 14: jmp 0x588dd4f4
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 36: jne 0x588dd51c
        __asm _emit 0x75
        __asm _emit 0x36
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 7F 2D: jg 0x588dd51c
        __asm _emit 0x7f
        __asm _emit 0x2d
        mov edx, 3
        ; Exact mapped bytes 66 89 91 64 01 00 00: mov word ptr [ecx + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 17: jne 0x588dd51c
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0a0h]
        push 0
        push 1
        push 0
        ; Exact mapped bytes E8 24 2A F8 FF: call 0x5885ff40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        ret
    }
}
