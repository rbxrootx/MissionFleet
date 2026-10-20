// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1750 .. +0x26E bytes.
extern "C" __declspec(naked) void FUN_584f1750_584F1750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1a4h], ecx
        mov eax, dword ptr [ebp - 1a4h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 07: jne 0x584f177c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x584f19ae
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        push 0
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 81 B6 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb6
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1a8h], 0
        mov dword ptr [ebp - 19ch], 0
        mov dword ptr [ebp - 1ach], 5ch
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A0 45 FD FF: call 0x584c5d60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 1a8h]
        sub ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp - 19ch], ecx
        movzx edx, byte ptr [ebp + 0ch]
        mov dword ptr [ebp - 198h], edx
        mov eax, dword ptr [ebp - 198h]
        sub eax, 1
        mov dword ptr [ebp - 198h], eax
        cmp dword ptr [ebp - 198h], 3
        ; Exact mapped bytes 0F 87 CD 00 00 00: ja 0x584f18ce
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes FF 24 8D C0 19 4F 58: jmp dword ptr [ecx*4 + 0x584f19c0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x19
        __asm _emit 0x4f
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        push edx
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 5D 29 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x29
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x584f18ce
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a2770h
        push 104h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 AF F5 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 19ch]
        push edx
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 11 4D F9 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6C: jmp 0x584f18ce
        __asm _emit 0xeb
        __asm _emit 0x6c
        push 588a2778h
        push 104h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 78 F5 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 19ch]
        push edx
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 DA 4C F9 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x584f18ce
        __asm _emit 0xeb
        __asm _emit 0x35
        push 588a2784h
        push 104h
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 41 F5 FB FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 19ch]
        push edx
        push 104h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 A3 4C F9 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 A6 F8 35 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        cmp dword ptr [ebp - 1a0h], 7d0h
        ; Exact mapped bytes 0F 8D B9 00 00 00: jge 0x584f19ac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1a0h]
        mov byte ptr [ebp + edx - 108h], 0dh
        mov eax, dword ptr [ebp - 1a0h]
        mov byte ptr [ebp + eax - 107h], 0ah
        push 1
        lea ecx, [ebp - 190h]
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 34 42 89 58: call dword ptr [0x58894234]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 194h], eax
        cmp dword ptr [ebp - 194h], -1
        ; Exact mapped bytes 75 22: jne 0x584f1959
        __asm _emit 0x75
        __asm _emit 0x22
        push 1000h
        lea ecx, [ebp - 190h]
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 34 42 89 58: call dword ptr [0x58894234]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 194h], eax
        cmp dword ptr [ebp - 194h], -1
        ; Exact mapped bytes 74 43: je 0x584f19a5
        __asm _emit 0x74
        __asm _emit 0x43
        push 2
        push 0
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        ; Exact mapped bytes FF 15 28 42 89 58: call dword ptr [0x58894228]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 01 F8 35 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        push eax
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        ; Exact mapped bytes FF 15 30 42 89 58: call dword ptr [0x58894230]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 194h]
        push edx
        ; Exact mapped bytes FF 15 2C 42 89 58: call dword ptr [0x5889422c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x584f19ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 98 F6 33 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf6
        __asm _emit 0x33
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
