// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769630 .. +0x1EE bytes.
extern "C" __declspec(naked) void FUN_58769630_58769630() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888fe64h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 34h
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E8 0E 76 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x76
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 72 B3 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 1ffh
        ; Exact mapped bytes 66 23 48 06: and cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x06
        movzx ecx, cx
        mov eax, esi
        cdq
        idiv ecx
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes E8 E5 75 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 49 B3 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, 1ffh
        ; Exact mapped bytes 66 23 50 06: and dx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x06
        movzx ecx, dx
        mov eax, esi
        cdq
        idiv ecx
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        mov edx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [edx + 0b0h]
        mov eax, dword ptr [ebp - 38h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0b0h]
        imul edx, dword ptr [ecx + 0b0h]
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 0F 8D 1C 01 00 00: jge 0x5876980c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5eb8h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [eax + ecx]
        test edx, edx
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x5876980c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 C0 B2 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb2
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 1ffh
        ; Exact mapped bytes 66 23 48 06: and cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x06
        movzx eax, cx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 38h]
        sub edx, eax
        mov dword ptr [ebp - 40h], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 99 B2 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb2
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 1ffh
        ; Exact mapped bytes 66 23 48 06: and cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x06
        movzx eax, cx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 34h]
        sub edx, eax
        imul eax, edx, 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 3ch], eax
        push 68h
        ; Exact mapped bytes E8 92 78 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 6D: je 0x587697f2
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 3ch]
        add esi, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 44 B2 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb2
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 08: mov ax, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, ax
        sub esi, ecx
        mov dword ptr [ebp - 20h], esi
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 24h], eax
        push 1dh
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B B3 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb3
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 40h
        push 0
        push 1388h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 83 36 D6 FF: call 0x584cce70
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587697f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
