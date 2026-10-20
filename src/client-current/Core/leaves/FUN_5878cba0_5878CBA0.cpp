// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878CBA0 .. +0x2F1 bytes.
extern "C" __declspec(naked) void FUN_5878cba0_5878CBA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 48h], ecx
        push 4
        mov eax, dword ptr [ebp - 48h]
        add eax, 70h
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 C8 FC 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 A0 D6 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x5878cd69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 8]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 4]
        add edx, 1eh
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 11 8A 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        push 40h
        push 0
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 F4 01 0C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 75h
        push ecx
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        ; Exact mapped bytes E8 56 55 D9 FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588b6910h
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 58h], ecx
        lea edx, [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 38 94 CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x94
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 5ch], ecx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 5F 94 CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x94
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 64h], eax
        push 0ch
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 7E CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 87 92 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 6ch], eax
        push 0dh
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 7E CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 5F 92 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x92
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 36 D2 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x36
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 4ch]
        movzx eax, word ptr [edx + ecx + 18h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 C7 7D CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 48 9F CF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 80h], ecx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 B2 91 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x91
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 84h], eax
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 96 91 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x91
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 88h], edx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 7A 91 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x91
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x5878cdbe
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 5B 91 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x91
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 3F 91 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x91
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 23 91 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x91
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 48h]
        movzx ecx, byte ptr [eax + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 5D: je 0x5878ce26
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 48h]
        movzx edx, byte ptr [ecx + 6ch]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 55 2A D1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 9ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 D9 90 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x90
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 0a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 BD 90 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x90
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5D: jmp 0x5878ce83
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 6
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 66 88 02 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 0a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 7A 90 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x90
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 0ach], edx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 5E 90 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x90
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C3 41 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x41
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
