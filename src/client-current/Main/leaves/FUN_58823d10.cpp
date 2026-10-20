// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58823D10 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_58823d10() {
    __asm {
        sub esp, 40h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 3ch], eax
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 4ch]
        mov ebx, dword ptr [ebp + 4]
        mov eax, dword ptr [ebp]
        push edi
        mov edi, ecx
        lea ecx, [ebx - 1]
        mov dword ptr [esp + 0ch], eax
        cmp ecx, 1ffh
        ; Exact mapped bytes 0F 87 5B 01 00 00: ja 0x58823e9b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        xor esi, esi
        ; Exact mapped bytes 39 35 A0 B4 A0 58: cmp dword ptr [0x58a0b4a0], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 74 2E: je 0x58823d79
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 66 83 3D A8 B4 A0 58 06: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x06
        ; Exact mapped bytes 75 24: jne 0x58823d79
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, eax
        push 3e8h
        shr edx, 10h
        push edx
        movzx eax, ax
        push eax
        lea ecx, [esp + 24h]
        push 5899dbcch
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 14h
        ; Exact mapped bytes EB 1D: jmp 0x58823d96
        __asm _emit 0xeb
        __asm _emit 0x1d
        movzx edx, word ptr [esp + 12h]
        push edx
        movzx eax, ax
        push eax
        lea ecx, [esp + 20h]
        push 5899dba4h
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 10h
        mov ecx, dword ptr [edi + 74h]
        push 0ffffh
        push -1
        lea edx, [esp + 20h]
        push edx
        ; Exact mapped bytes E8 26 4B 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x4b
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebx, 32h
        ; Exact mapped bytes 76 44: jbe 0x58823df3
        __asm _emit 0x76
        __asm _emit 0x44
        nop
        push 33h
        lea eax, [esi + ebp + 8]
        push eax
        lea ecx, [esp + 20h]
        push ecx
        ; Exact mapped bytes FF 15 94 C1 98 58: call dword ptr [0x5898c194]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        test byte ptr [esi + ebp + 3ah], 80h
        ; Exact mapped bytes 75 05: jne 0x58823dce
        __asm _emit 0x75
        __asm _emit 0x05
        add esi, 32h
        ; Exact mapped bytes EB 08: jmp 0x58823dd6
        __asm _emit 0xeb
        __asm _emit 0x08
        mov byte ptr [esp + 4ah], 0
        add esi, 31h
        mov ecx, dword ptr [edi + 74h]
        push 0ffffffh
        push -1
        lea edx, [esp + 20h]
        push edx
        ; Exact mapped bytes E8 E6 4A 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, ebx
        sub eax, esi
        cmp eax, 32h
        ; Exact mapped bytes 77 BD: ja 0x58823db0
        __asm _emit 0x77
        __asm _emit 0xbd
        lea ecx, [esi + ebp + 8]
        push ecx
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 74h]
        push 0ffffffh
        push -1
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes E8 B9 4A 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 74h]
        push 0ffffffh
        push -1
        push 5898d61ch
        ; Exact mapped bytes E8 A5 4A 0E 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 74h]
        ; Exact mapped bytes E8 3D 4A 0E 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 D6 F3 FF FF: call 0x58823210
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 0bh
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 14: jle 0x58823e60
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x58823e60
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x58823e62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 22 3B 0E 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x3b
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], esi
        pop esi
        ; Exact mapped bytes 7E 14: jle 0x58823e90
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x58823e90
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x58823e92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 48h]
        pop edi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 31 8D 15 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 40h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
